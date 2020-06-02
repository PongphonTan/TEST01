#include<iostream>
//#include<math.h>
using namespace std;

float fun(float x)
{
	return 1/(1+x*x);
}

float trape(float a, float b, int n) {
	float x[n-1],y[n-1];
	float h = (b-a)/n;
	for(int i=0;i<n+1;i++) {
		x[i] = a + i*h;
		y[i] = fun(x[i]);
	}
	float sum = 0;
	for(int i=1;i<n;i++) {
		sum = sum + h*y[i];
	}
	return h/2.0*(y[0]+y[n])+sum;
}

int main()
{
	int n;
	float a,b;
	cout << "This program find the definite integral by using Trapeziodal rule";
	cout << "Enter limits of integration\n\nLower limit a = ";
	cin >> a;
	cout << "Upper limit b = ";
	cin >> b;
	cout << "Enter subintevals n = "; 
	cin >> n;
	cout << "\nThe definite integral is " << trape(a, b, n) << endl;
	return 0;
}
