#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

void RandomNumberGen(int a[999]);
void RandomDemandGen(int a[999]);

int main(){
 int m[999],i,a[999];
 //RandomNumberGen(m);
 RandomDemandGen(a);
 for(i=1;i<=30;i++){
  cout << a[i] << endl;
 }
 return 0;
}
//Random1
void RandomNumberGen(int a[999] ){
 int n[999],i;
 srand(time(NULL));
 for(i=1;i<=30;i++){
  if(rand()%20 <= 2 ) a[i]=0;
 else if(rand()%20 <=10 ) a[i]=1;
 else if(rand()%20 <=15 ) a[i]=2;
 else a[i]=3;
 }

 for(i=1;i<=30;i++){
  cout << a[i] << endl;
 }
}



//Random2
void RandomDemandGen(int a[999]){
 int n[999],i;
 srand(time(NULL));
 for(i=1;i<=30;i++){
  if(rand()%10 <= 3 ) a[i]=1;
 else if(rand()%10 <=6 ) a[i]=2;
 else if(rand()%10 <=8 ) a[i]=3;
 else a[i]=4;
 }

 //for(i=1;i<=30;i++){
  //cout << a[i] << endl;
 //}

}
