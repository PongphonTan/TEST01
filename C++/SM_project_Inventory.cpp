//#include <stdio.h>
#include <time.h>//give time for seed
#include <fstream>//read and write file
#include <random>//random number
//#include <iostream>

/*
  initially, Our shop's inventory contains 25 units of items.
  The number of customer(s) who buy our product has the following probability distributuion
  | nc | prob. |
  |  0 |  3/20 |
  |  1 |  8/20 |
  |  2 |  5/20 |
  |  3 |  4/20 |
  and, The number of purchsed item(s) by each customer(s) has the following probability distributuion.
  | np | prob. |
  |  1 |  4/10 |
  |  2 |  3/10 |
  |  3 |  2/10 |
  |  4 |  1/10 |
  Our invenory use the following policy:
  order: when item(s) <= 10 and no outstanding order
  lead time: 2 days
  Holding cost: 0.5 per unit per day
  Ordering cost: 45 per order
  Shortage cost: 5 per unit per day
  we would like to know average total cost for 30 days
*/

//declare variable for running simulation
float tc, ch, sum_atc;
float atc = 0;

int q, oo, n, days, td;
int nw = 0;
int co, cs, oa, rq, i;
int rand_num_cus[30] = {0}, rand_num_dem[30] = {0}, nc[30] = {0}, np[30] = {0};

//char buffer [50];

//pseudo uniform random number generator for nc and np
std::default_random_engine re({static_cast<long unsigned int>(time(0))});
std::uniform_int_distribution<int> unif_cus(0, 19);
std::uniform_int_distribution<int> unif_dem(0, 9);

//declare variable for write and read data form text file
std::fstream file;

//prototype function
void initialize();
void run_sim();
void demand_arrive();
void rand_nc();
void rand_np();
void calc_cost();
void next_day();
void report();
void write_data();
void read_data();
//void reset_data();

//driver
int main() {
  int count = 30;

  //reset_data();

  // run simulation for 30 times
  for (int k = 1; k <= count; ++k)
  {

    initialize();

    run_sim();

    write_data();

  }

  read_data();

  //display summary

  printf("num of runned simulation: %d\nmean of avg tc is %.3f $\n", nw, sum_atc / nw);

  return 0;
}

//initialize variable
void initialize() {

  q = 25, oo = 0, n = 1, days = 30;

}

//run simulation for 30 days
void run_sim() {

  //printf(" n  q nc np rq   ch co cs   tc \n"); //header table
  while (n <= days) {

    i = n - 1;// array index

    demand_arrive();

    calc_cost();

    //report();

    next_day();

  }

  atc = atc/30;

  //printf("avg tc = %.3f\n", atc);

}

//demand for inventory
void demand_arrive() {

  rand_nc();

  rand_np();

}

//probability distribution for number of cunstomer(s)
void rand_nc() {

  rand_num_cus[i] = unif_cus(re);

  if (rand_num_cus[i] <= 19  && rand_num_cus[i] >= 16) {
    nc[i] = 3;
  }
  if (rand_num_cus[i] <= 15  && rand_num_cus[i] >= 11) {
    nc[i] = 2;
  }
  if (rand_num_cus[i] <= 10  && rand_num_cus[i] >= 3) {
    nc[i] = 1;
  }
  if (rand_num_cus[i] <= 2  && rand_num_cus[i] >= 0) {
    nc[i] = 0;
  }

}

//probability distribution for total number of purchased items by customer(s)
void rand_np() {

  td = 0;

  for (int j = 0; j < nc[i]; ++j)
  {

    rand_num_dem[i] = unif_dem(re);

    if (rand_num_dem[i] == 9) {
      td += 4;
    }
    if (rand_num_dem[i] <= 8  && rand_num_dem[i] >= 7) {
      td += 3;
    }
    if (rand_num_dem[i] <= 6  && rand_num_dem[i] >= 4) {
      td += 2;
    }
    if (rand_num_dem[i] <= 3  && rand_num_dem[i] >= 0) {
      td += 1;
    }

  }

  np[i] = td;

}

// calculate total cost
void calc_cost() {

  if (n == oa) {
    q += 25;
    oo = 0;
  }

  rq = q - np[i];

  if (rq > 0) {
    ch = rq * 0.5;
  }

  if (rq <= 10 and oo == 0) {
    co = 45;
    oa = n + 2;
    oo = 1;
  }

  if (rq < 0) {
    cs = abs(rq) * 0.5;
  }

  tc = ch + co + cs;

  atc += tc;

}

//display a value of each simulated variable
void report() {

  printf("%2d %2d %2d %2d %2d %4.1f %2d %2d %4.1f\n",n,q,nc[i],np[i],rq,ch,co,cs,tc);

}

//set variable for the next day of simulation
void next_day() {

  q = rq;
  tc = 0;
  co = 0;
  ch = 0;
  cs = 0;

  n += 1;

}

//write and read data form recorded text file to summarize the simulation
void write_data() {

  //std::ofstream myfile;
  file.open("data_atc.txt",std::ios::app);
  //sprintf(buffer, "%.3f\n", atc);
  file << atc << std::endl;
  file.close();

}

void read_data() {

  float inData;

  //std::ifstream myfile;
  file.open("data_atc.txt");

  while (file >> inData) {
    sum_atc += inData;
    nw += 1;
  }

  file.close();

}
