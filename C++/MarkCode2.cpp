#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;
int abs(int a){
	return(a>=0?a:-a);
}
int main(){
	// np = number of purchase
	int Qr[999],i,check[999],a;
	float Tc[999],ch=0.5,qr;
	printf("Quantity| Day| Number of customers| Number of purchase items| Number of remaining items| Holding cost| Ordering cost| Shortage cost| Total cost|\n");
  printf("________|____|____________________|_________________________|__________________________|_____________|______________|______________|___________|\n");
	Qr[0]=25;
	check[-2]=0;
	check[-1]=0;
for(i=1;i<=30;i++){
	cin >> a;
	check[i]=0;
	Tc[i]=0;
	Qr[i]=Qr[i-1]-a;
if (check[i-2]==1){
	Qr[i] = Qr[i]+25;
}
if (Qr[i]<=10){
	if (check[i-1]==1)
	check[i]=0;
	if (check[i-1]==0)
	check[i]=1;
	qr*=0.5;
	Tc[i]=qr+45;
}
if (Qr[i]>=0) Tc[i] = Qr[i]*.5;
else if (Qr[i]<0) Tc[i]=abs(Qr[i])*5;
	printf("%8d| %3d| %19d|  %23d|  %24d|  %11f|  %12d|  %12d|  %9f|\n",i,i,0,0,Qr[i],0,ch,0,Tc[i]);
   printf("________|____|____________________|_________________________|__________________________|_____________|______________|______________|___________|\n");
	//printf("Tc[%d]= %.2f    Qr[%d] = %d  %d\n " , i,Tc[i] ,i,Qr[i],check[i] );
	//cout << "Tc[i] " << Tc[i] << '  ' << Qr[i] << endl;
}




}
