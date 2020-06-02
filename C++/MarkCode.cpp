#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int abs(int a){
	return(a>=0?a:-a);
}
int main(){
	// np = number of purchase
	int Qr[999],i,np=200,check[999];
	float Tc[999];
	Qr[0]=25;
	check[-2]=0;
	check[-1]=0;
for(i=1;i<=30;i++){
	check[i]=0;
	Tc[i]=0;
	Qr[i]=Qr[i-1]-np;
if (check[i-2]==1){
	Qr[i] = Qr[i]+25;
}
if (Qr[i]<=10){
	if (check[i-1]==1)
	check[i]=0;
	if (check[i-1]==0)
	check[i]=1;
	Tc[i]=Tc[i]+45;
}
if (Qr[i]>=0) Tc[i] = Qr[i]*.5;
else if (Qr[i]<0) Tc[i]=abs(Qr[i])*5;

	printf("Tc[%d]= %.2f    Qr[%d] = %d  %d\n " , i,Tc[i] ,i,Qr[i],check[i] );
	//cout << "Tc[i] " << Tc[i] << '  ' << Qr[i] << endl;
}




}
