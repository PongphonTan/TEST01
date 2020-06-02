#include <iostream>
using namespace std;

void printArray(float arr[], int size) {//print inputed array with determined size
  for (int i = 0; i < size; i++) {
    printf("%.2f ", arr[i]);
  }
}

float find_sum(float x[],int size) {
  float sum=0;
  for (int i = 0; i < size; i++) {
    sum = sum+x[i];
  }
  return sum;
}

int main() {
  float x[]={1,2,3,4,5,6,7,8,9,10};
  float y[]={1.3,3,5,4.2,5,7,8.8,10.1,12.5,13,15.6};
  float a, b;
  int sum_a, sum_b=0, sum_x, sum_y, size_x=sizeof(x)/sizeof(x[0]), size_y=sizeof(y)/sizeof(y[0]);
  a = find_sum(x, size_x);
  b = find_sum(y, size_y);
  printArray(x, size_x);
  cout<<endl;
  printArray(y, size_y);
  cout<<endl;
  printf("%.2f %.2f",a,b);
  return 0;
}
