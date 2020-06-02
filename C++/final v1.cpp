#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
#include <random>
#include <time.h>
using namespace std;

int abs(int a)
{
	return(a>=0?a:-a);
}
int main()
{
int i,n[31];
  default_random_engine eng{static_cast<long unsigned int>(time(0))};
  // std::seed_seq ssq{r()};
  // and then passing it to the engine does the same
  //default_random_engine eng{r()};
  uniform_int_distribution<int> urd(0, 19);
  uniform_int_distribution<int> urd2(0, 9);
  //for(i=0;i<=30;i++){
  //cout << "Uniform [0, 1): " << urd(eng)<<endl;
  //}

  //return n[31];
  //////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // np = number of purchase
	int Qr[31],check[31],Bo[31],Co[31],y[31],Cs[31];
	float Tc[31],Ch[31];
	//printf("Day| Quantity| Number of customers| Number of purchase items| Number of remaining items| Holding cost| Ordering cost| Shortage cost| Total cost|\n");
  	//printf("___|_________|____________________|_________________________|__________________________|_____________|______________|______________|___________|\n");
	for(i=0;i<30;i++)
    {
    	n[i] = urd(eng);
    	cout<<"--->"<<n[i]<<endl;
        if(n[i]>=0&&n[i]<=2)
		{
            y[i]=0;
            cout << "Have number of custumer"<<y[i] << endl;
		}
        if(n[i]>=3&&n[i]<=10)
		{
            y[i]=1;
            cout << "Have number of custumer"<<y[i] << endl;
		}
        if(n[i]>=11&&n[i]<=15)
		{

            y[i]=2;
            cout << "Have number of custumer"<<y[i] << endl;
		}
        if(n[i]>=16&&n[i]<=19)
		{

            y[i]=3;
            cout << "Have number of custumer"<<y[i] << endl;
		}
    }
    int np[31],v1=0,v2=0,v3=0,np1[31],np2[31],np3[31];

    //y[i]=cus(n,i,y);
    for(i=0;i<30;i++)
    {
    if(y[i]==0)
    {
    	np[i]=0;
    }
    else if(y[i]==1)
    {
        v1=urd2(eng);
            if(v1>=9)
                np1[i]=4;
            else if(v1>=7)
                np1[i]=3;
            else if(v1>=4)
                np1[i]=2;
            else
                np1[i]=1;
        np[i]=np1[i];
    }
    else if (y[i]==2)
	{
		{
			{
				v1=urd2(eng);
                if(v1>=9)
                    np1[i]=4;
                else if(v1>=7)
                    np1[i]=3;
                else if(v1>=4)
                    np1[i]=2;
                else
                    np1[i]=1;
            }
			{
				v2=urd2(eng);
                if(v2>=9)
                    np2[i]=4;
                else if(v2>=7)
                    np2[i]=3;
                else if(v2>=4)
                    np2[i]=2;
                else
                    np2[i]=1;
            }
			np[i]=np1[i]+np2[i];
			//cout << np1[i] << "." <<np2[i] << ".";
		}
    }
    else
	{
		{
			{
				v1=urd2(eng);
	            if(v1>=9)
					np1[i]=4;
	            else if(v1>=7)
	                np1[i]=3;
	            else if(v1>=4)
	                np1[i]=2;
	            else
	                np1[i]=1;
			}
            {

                        v2=urd2(eng);

                    if(v2>=9)

                        np2[i]=4;

                    else if(v2>=7)

                        np2[i]=3;

                    else if(v2>=4)

                        np2[i]=2;

                    else

                        np2[i]=1;

                    }

                    {

                        v3=urd2(eng);

                    if(v3>=9)

                        np3[i]=4;

                    else if(v3>=7)

                        np3[i]=3;

                    else if(v3>=4)

                        np3[i]=2;

                    else

                        np3[i]=1;

                    }

                }

        np[i]=np1[i]+np2[i]+np3[i];

                //cout << np1[i] <<"."<<np2[i]<<"."<<np3[i]<<".";



                    }

        cout << np[i] << "\n";

            }
    printf(" n  q nc np rq bo  ch  co cs  tc \n");
	Qr[1]=25;
	//check[-1]=0;
	//check[0]=0;
	//Co[0]=45;
	for(i=2;i<=31;i++)
	{
		//cin >> a >> "purchase items";
		//check[i]=0;
		Tc[i]=0;
		Qr[i]=Qr[i-1]-np[i-2];
		Bo[i]=0;
		Ch[i]=0;
		Co[i]=0;
		Cs[i]=0;
		if (check[i-2]==1)
		{
			Qr[i] = Qr[i]+25;
		}
		if (Qr[i]<=10)
		{
			if (check[i-1]==1)
			{
				check[i]=0;		//you can't order
				cout << "you can't order" << endl;
			}

			if (check[i-1]==0)
			{
				check[i]=1;		//you can order
				Co[i]=45;
				cout << "you can order" << endl;
				//cout << "ordering cost" << Co[i]<< endl;
			}
		}
		if (Qr[i]>=0)
		{
			Ch[i]=Qr[i]*0.5;
		}
		if (Qr[i]<0)
		{
			Bo[i]=abs(Qr[i]);
			Qr[i]=0;
			Cs[i]=Bo[i]*5;
		}
		Tc[i]=Co[i]+Ch[i]+Cs[i];
		//printf("%3d| %8d| %19d|  %23d|  %24d|  %11.1f|  %12d|  %12d|  %9.1f|\n",i,i,0,np,Qr[i],ch,co,cs,Tc[i]);
    	//printf("___|_________|____________________|_________________________|__________________________|_____________|______________|______________|___________|\n");
		printf("%2d %2d %2d %2d %2d %2d %4.1f %2d %2d %2.2f\n",i-1,Qr[i-1],y[i-2],np[i-2],Qr[i],Bo[i],Ch[i],Co[i],Cs[i],Tc[i]);
		//printf("Tc[%d]= %.2f    Qr[%d] = %d  %d\n " , i,Tc[i] ,i,Qr[i],check[i] );
		//cout << "Tc[i] " << Tc[i] << '  ' << Qr[i] << endl;
	}
}

