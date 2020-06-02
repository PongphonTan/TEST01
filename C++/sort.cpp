#include <iostream>
using namespace std;

void printArray(int arr[], int size) {//print inputed array with determined size
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}

int main() {
  int num[] = {9,1,5,5,4,2,6,6,6,13,1,1,1,10,20,0};//input data
  int i=0,j,chk=0,temp,length=sizeof(num)/sizeof(*num),count=1;
  /*for (int l = 0; l <= length-1; l++) { //<=length(num)-1
    printf("%d\t", num[l]);//show the input array
  }*/
  printArray(num, length);
  printf("\n");
  while (chk < length-1) { //<length(num)-1 use to check the sorting process
    j=i+1;//next position to i
    //chk is used to check the sorted number by compare the i and j value 2
    //i and j use as indicator to access the value in array
    printf("%d) chk=%d the switched value num[%d]=%d num[%d]=%d\n",count++, chk,i,num[i],j,num[j]);
    printArray(num, length);
    printf("\n--------------------\n");
    if (j==length) {
   //==length(num) the indicator reach the last index so reset to 0 to start check from start point again
      i=0;
      j=i+1;
    }
    //use to skip the repeated value
    while (num[i]==num[j]) {
      j+=1;
      if (j>length) { //>length(num)
        chk=length-1; //chk=lenght(num)-1
      }
    }
    //switch value
    if (num[i] > num[j]) {
      temp=num[i];
      num[i]=num[j];
      num[j]=temp;
      i+=1;
      chk=0;
    } else {
      //counter for sorted value
      chk+=1;
      i+=1;
    }
  }
  printArray(num, length);
  /*for (int k = 0; k <= length-1; k++) { //lenght(num)-1 to indicate index of array
    printf("%d\t", num[k]);//print each elements of array
  }*/
  //printf("\n%d %d\n", sizeof(num),sizeof(*num));//consider, this can give length of array but with some restriction
  return 0;
}
