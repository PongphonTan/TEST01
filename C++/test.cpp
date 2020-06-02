#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include "lcgrand.h"
#include <iostream>
#include <math.h>
/*




int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int nc,np;
    int rand_num_1 = rand()%19 + 0;
    int rand_num_2 = 5;
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
      rand_num_2 = rand()%9 + 0;
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
    char buffer [50];
  sprintf(buffer,"%d %d %d %d\n",rand_num_1,nc,rand_num_2,td);
  std::ofstream myfile;
  myfile.open ("data.txt",std::ios::app);
  myfile << buffer;
  myfile.close();
  return 0;
}




int test[5]

void() {
  test[]
}

int main()
{
  int num[30]={0};
  //float num = lcgrand(91);
  int maxVal = max(num)
  std::cout << maxVal;
  return 0;
}



void print_2_dim_arr(float arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    /*
// input array into matrix
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }


// print array
    for (int i=0;i<n;i++) {
        cout<<arr[i];
    }
*/
// summation
    /*
float find_sum(float arr[],int num) {
  float sum=0;
  for (int i = 0; i < num; i++) {
    sum = sum+arr[i];
  }
  return sum;
}

summation = find_sum(x, size_x);




float array[][2] = {{5, 6}, {3, 2}};
print_2_dim_arr(array, 2);

return 0;
}
*/

// C++ program to compute factorial of big numbers
#include<iostream>
using namespace std;

// Maximum number of digits in output
#define MAX 500

int multiply(int x, int res[], int res_size);

// This function finds factorial of large numbers
// and prints them
void factorial(int n)
{
    int res[MAX];

    // Initialize result
    res[0] = 1;
    int res_size = 1;

    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);

    cout << "Factorial of given number is \n";
    for (int i=res_size-1; i>=0; i--)
        cout << res[i];
}

// This function multiplies x with the number
// represented by res[].
// res_size is size of res[] or number of digits in the
// number represented by res[]. This function uses simple
// school mathematics for multiplication.
// This function may value of res_size and returns the
// new value of res_size
int multiply(int x, int res[], int res_size)
{
    int carry = 0;  // Initialize carry

    // One by one multiply n with individual digits of res[]
    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;

        // Store last digit of 'prod' in res[]
        res[i] = prod % 10;

        // Put rest in carry
        carry  = prod/10;
    }

    // Put carry in res and increase result size
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

// Driver program
int main()
{
    factorial(100);
    return 0;
}
