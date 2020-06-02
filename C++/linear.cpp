#include <iostream>
using namespace std;

float cat(float catnip[],int catnip_size) {// arrary[] , n
	//int size = 
	float stomach = 0; // sum = 
	for (int position = 0; position<catnip_size; position++) // i
	{
		stomach = stomach+catnip[position];
	}
	return stomach;
}

float rabbit(float carrot[], float apple[], int carrot_size, int apple_size) {
	float stomach = 0;
	for (int position = 0; position<carrot_size || position<apple_size; position++)
	{
		stomach = stomach+(carrot[position]*apple[position]);
	}
	return stomach;
}

int main()
{
	int neko_size,usagi_size;
	do {
		cout << "Input the number of data x: ";
		cin >> neko_size;
		if (neko_size<1 || neko_size>100)
		{
			cout << "Plese input the number of data x again (1 <= x <= 100)" << endl;
		}
	} while (neko_size<1 || neko_size>100);

	do {
		cout << "Input the number of data y: ";
		cin >> usagi_size;
		if (usagi_size<1 || usagi_size>100)
		{
			cout << "Plese input the number of data y again (1 <= y <= 100)" << endl;
		}
	}
	while (usagi_size<1 || usagi_size>100);

	float neko[neko_size], usagi[usagi_size];

	for (int position = 0; position<neko_size || position<usagi_size; position++)
	{
		cout << "Input data x[" << position+1 << "]: ";
		cin >> neko[position];
		cout << "Input data y[" << position+1 << "]: ";
		cin >> usagi[position];
	}

	float excalibur = cat(neko, neko_size);
	float wine = cat(usagi, usagi_size);
	float excalibur_with_wine = rabbit(neko, usagi, neko_size, usagi_size);
	float double_excalibur = rabbit(neko, neko, neko_size, neko_size);
	float arondight = (neko_size*excalibur_with_wine-excalibur*wine)/(neko_size*double_excalibur-excalibur*excalibur);
	float balmung = (double_excalibur*wine-excalibur_with_wine*excalibur)/(neko_size*double_excalibur-excalibur*excalibur);

	cout << "-------------------------------" << endl;
	cout << "Summation of x is " << excalibur << endl;
	cout << "Summation of y is " << wine << endl;
	cout << "Summation of xy is " << excalibur_with_wine << endl;
	cout << "Summation of x^2 is " << double_excalibur << endl;
	cout << "the value of a is " << arondight << endl;
	cout << "the value of b is " << balmung << endl;
	cout << "-------------------------------" << endl;
/*
	float plastic_bag = 0;
	for (int position = 0; position < neko_size; position++) {
		plastic_bag = arondight*neko[position]+balmung;
		cout << "the value of p(x) when the value of x = "<< neko[position]<< " is " << plastic_bag << endl;
	}
*/
	int position;
	cout << "Input the position of data x by start counting from 1 not 0: ";
	cin >> position;
	while (position>neko_size || position<0) {
		cout << "the input position cannot be negative or greater than the size of arrry please input again: ";
		cin >> position;
	}

	cout << "the position " << position << " of the data x have the value "<< neko[position-1] <<endl;
	cout << "-------------------------------" << endl;

	float plastic_bag = arondight*neko[position-1]+balmung;
	cout << "the value of p(x) when the value of x = "<< neko[position-1]<< " is " << plastic_bag << endl;
	return 0;
}
