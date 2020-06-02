#include <iostream>
using namespace std;

/*void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout<<arr[i]<<" ";
  }
}

void swap(int* low, int* high) {
  int temp = *low;
  *low = *high;
  *high = temp;
}

void bubble_sort(int arr[], int size) {
  //int count_the_number_of_loop=0;
  for (int i = 0; i < size-1; i++) {
    for (int j = 0; j < size-i-1; j++) {
      if (arr[j]>arr[j+1]) {
        //count_the_number_of_loop+=1;
        //printf("%d) the seleced value in array is the postion[%d]=%d and position[%d]=%d\n",count_the_number_of_loop,j,arr[j],j+1,arr[j+1]);
        swap(&arr[j], &arr[j+1]);
        //cout<<"now array is [ ";
        //print_array(arr, size);
        //cout<<"]"<<endl;
      }
    }
  }
}

int main() {
  int arr[] = {4,2,5,7,0,6,6,10,1};
  int size=sizeof(arr)/sizeof(arr[0]);

  cout<<"the input (unsorted)"<<endl<<"array is: ";
  print_array(arr, size);
  cout<<endl;

  cout << "-------------------------------" << endl;

  //cout<<"...showing the process of sorting..." << endl;
  bubble_sort(arr, size);

  //cout << "-------------------------------" << endl;

  cout<<"the output (sorted)"<<endl<<"array is: ";
  print_array(arr, size);
  return 0;
}
*/


int main() {
  int arr[] = {4,2,5,7,0,6,6,10,1}; //given array
  int size=sizeof(arr)/sizeof(arr[0]); //number of elements in array

  cout<<"the input (unsorted)"<<endl<<"array is: ";

//display array
  for (int i = 0; i < size; i++) {
    cout<<arr[i]<<" ";
  }

  cout<<endl;

  cout << "-------------------------------" << endl;

//sorting process
  for (int i = 0; i < size-1; i++) {
    for (int j = 0; j < size-i-1; j++) {
      if (arr[j]>arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

  cout<<"the output (sorted)"<<endl<<"array is: ";

//display array
  for (int i = 0; i < size; i++) {
    cout<<arr[i]<<" ";
  }

  return 0;
}