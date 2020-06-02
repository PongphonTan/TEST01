#include <iostream>
#include <fstream>
using namespace std;

void print_array(int arr[], int size)
{
  	for (int i = 0; i < size; i++) 
	{
		cout<<arr[i]<<" ";
  	}
}

void bubble_sort(int arr[], int size) 
{
	int temp;
  	for (int i = 0; i < size-1; i++) 
	{
    	for (int j = 0; j < size-i-1; j++) 
		{
      		if (arr[j]>arr[j+1]) 
			{
        		temp = arr[j];
        		arr[j] = arr[j+1];
        		arr[j+1] = temp;
        		print_array(arr, size);
        		cout<<endl;
      		}
    	}
  	}
}

int main() 
{
	ofstream myfile;
	myfile.open("C:/Users/USER/Documents/Bam/C++/Test111.txt",ios::app);
  	int i, size;
	cout << "Input the number of your data: ";
	cin >> size;
	int arr[size];
	
	for (i = 0; i<size; i++)
	{
		cout << "Input data" << i+1 << ":";
		cin >> arr[i];
		myfile << arr[i];
	}
	
	cout << "******************************\n";
  	print_array(arr, size);
  	cout<<endl;
  	bubble_sort(arr, size);
  	
  	myfile.close();
	return 0;
}
