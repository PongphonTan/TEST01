#include<iostream>
#include<math.h>
using namespace std;

float find_sum(float* arr,int num) {
    cout << arr <<endl;
  float sum=0;
  for (int i = 0; i < num; i++) {
    sum = sum+arr[i];
  }
  return sum;
}

int main()
{
    float x[] = {9, 7, 6, 3};
    int n = 4;
    cout << x <<endl;
    float mean = find_sum(x, n)/n;
    cout<<mean<<endl;

    float war = 0;
    for (int i = 0; i < n; ++i) {
        war += pow(x[i]-mean,2);
    }
    float var = war/(n-1);
    cout << var << endl;

    float sd = sqrt(var);
    cout << sd << endl;

    return 0;
}