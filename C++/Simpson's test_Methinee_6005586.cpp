#include<iostream>
#include<math.h>
using namespace std;

float func(float x)
{
	float a;
	a =  1/(1+x*x);
	return a;
}

int main()
{
	int n,i;
	float a,b,c,h,integral,sum1=0,sum2=0;
	cout << "\n\t This program find the definite integral by using 1/3 Simpson's rule";
	cout << "\n\n Enter limits of integration \n\n Lower limit a = ";
	cin >> a;
	cout << "\n Upper limit b = ";
	cin >> b;
	cout << "\n Enter subintevals n = "; 
	cin >> n;
	while(n%2!=0)
	{
		cout << "\n Error: The subintervals must be even number";
		cout << "\n Enter subintevals n = ";
		cin >> n;
	}
	float x[n-1],y[n-1];
	h = abs(b-a)/n;
	for(i=0;i<n+1;i++)
	{
		x[i] = a + i*h;
		y[i] = func(x[i]);
	}
	for(i=1;i<n;i=i+2)
	{
		sum1 = sum1+4.0*y[i];
	}
	for(i=2;i<n-1;i=i+2)
	{
		sum2 = sum2+2.0*y[i];
	}
	integral = (h/3.0)*(y[0]+y[n]+sum1+sum2);
	cout << "\n The definite integral = "<< integral;
	return(0);
}
