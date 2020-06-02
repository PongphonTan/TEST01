#include <stdio.h>
#include <time.h>
//#include <stdlib.h>
#include <fstream>
#include <random>
//#include <iostream>

int main() {
  float tc = 0, ch = 0, atc = 0;
  int q = 25, co = 0, cs = 0, oo = 0, oa, nc = 0, np = 0, rq = 0, rand_num_1, rand_num_2;
 // char buffer [50];

  //uni form rand
  std::default_random_engine re({static_cast<long unsigned int>(time(0))});
  std::uniform_int_distribution<int> unif_1(0,19);
  std::uniform_int_distribution<int> unif_2(0,9);

  //
  //std::ofstream myfile;
  //myfile.open("data.txt",std::ios::app);


  printf(" n  q nc np rq   ch co cs tc \n");
  //sprintf(buffer," n  q nc np rq   ch co cs tc \n");
  //myfile << buffer;

  //srand(time(NULL));
  for (int n = 1; n <= 30; ++n) {

    rand_num_1 = unif_1(re);//rand()%19 + 0;

    if (n == oa) {
      q += 25;
      oo = 0;
    }

    if (rand_num_1 <= 19) {
      nc = 3;
    }
    if (rand_num_1 <= 15) {
      nc = 2;
    }
    if (rand_num_1 <= 10) {
      nc = 1;
    }
    if (rand_num_1 <= 2) {
      nc = 0;
    }

    int td = 0;

    for (int i = 0; i < nc; ++i)
    {

      rand_num_2 = unif_2(re);//rand()%9 + 0;

      if (rand_num_2 <= 9) {
      np = 4;
      }
      if (rand_num_2 <= 8) {
      np = 3;
      }
      if (rand_num_2 <= 6) {
      np = 2;
      }
      if (rand_num_2 <= 3) {
      np = 1;
      }

      td += np;
    }
    np = td;

    rq = q - np;

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
    printf("%2d %2d %2d %2d %2d %4.1f %2d %2d %2.1f\n",n,q,nc,np,rq,ch,co,cs,tc);
    //sprintf(buffer,"%2d %2d %2d %2d %2d %4.1f %2d %2d %2.1f\n",n,q,nc,np,rq,ch,co,cs,tc);
    //myfile << buffer;

    q = rq;
    tc = 0;
    co = 0;
    ch = 0;
    cs = 0;
  }

  atc = atc / 30;
  //sprintf(buffer, "atc = %2.2f\n---------------------------------\n", atc);
  printf("atc = %2.2f\n---------------------------------\n", atc);
  //myfile << buffer;
  //myfile.close();

  return 0;
}
