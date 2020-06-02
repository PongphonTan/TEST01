#include <iostream>
#include <random>
#include <time.h>
using namespace std;
  default_random_engine eng{static_cast<long unsigned int>(time(0))};
  uniform_int_distribution<int> urd(0, 19);
  uniform_int_distribution<int> urd2(0, 9);
int work(void);
int abs(int a);
int main() 
{
		cout<<work()<<endl;
}
int abs(int a)
{
	return(a>=0?a:-a);
}
int work(void)
{
	int Qr[31],check[31],Bo[31],Co[31],y[31],Cs[31],i,n[31];
	float Tc[31],Ch[31],sum,Avg;
	cout << " _____________________________________________________________________________________________________________________________________________________________________\n" << endl;
	cout << "|\t\t\t\t\t\t\t\t\tGroup Assignment: Simulation                                                                  |" << endl;
	cout << "|_____________________________________________________________________________________________________________________________________________________________________|" << endl;
	cout << "\tInventory with random daemands" << endl;
	cout << "     MU company sells chocolate. Initially, Our company's inventory contains 25 scoops of ice-cream" << endl;
	cout << "     The number of customer(s) who buy some amount of ice-cream in each day has the following probability distribution" << endl;
	cout << " ___________________________________________" << endl;
	cout << "|   Number of customers   |   Probability   |" << endl;
	cout << "|_________________________|_________________|" << endl;
	cout << "|            0            |      0.15       |" << endl;
	cout << "|            1            |      0.4        |" << endl;
	cout << "|            2            |      0.25       |" << endl;
	cout << "|            3            |      0.2        |" << endl;
	cout << "|            0            |      0.15       |" << endl;	
	cout << "|___________________________________________|" << endl;

	cout << " ___________________________________________________" << endl;
	cout << "|   Demand per customer (units)   |   Probability   |" << endl;
	cout << "|_________________________________|_________________|" << endl;
	cout << "|               1                 |       0.4       |" << endl;
	cout << "|               2                 |       0.3       |" << endl;
	cout << "|               3                 |       0.2       |" << endl;
	cout << "|               4                 |       0.1       |" << endl;	
	cout << "|___________________________________________________|" << endl;
	
	cout << "\tOur inventory use the following policy:" << endl;
	cout << "     order: when item(s) <= 10 and no outstanding order" << endl;
	cout << "     lead time: 2 days" << endl;
	cout << "     Holding cost: 0.5 per unit per day" << endl;
	cout << "     Ordering cost: 45 per order" << endl;
	cout << "     Shortage cost: 5 per unit per day" << endl;
	cout << "\twe would like to know average total cost for 30 days" << endl;
	cout << "______________________________________________________________________________________________________________________________________________________________________" << endl;
	printf("|Day| Quantity| Number of customers| Number of purchase items| Number of remaining items| Number of back order| Holding cost| Ordering cost| Shortage cost| Total cost|");
  	printf("|___|_________|____________________|_________________________|__________________________|_____________________|_____________|______________|______________|___________|");
	for(i=0;i<30;i++)
    {
    	n[i] = urd(eng);
        if(n[i]>=0&&n[i]<=2)
		{
            y[i]=0;
		}
        if(n[i]>=3&&n[i]<=10)
		{
            y[i]=1;
		}
        if(n[i]>=11&&n[i]<=15)
		{
            y[i]=2;
		}
        if(n[i]>=16&&n[i]<=19)
		{
            y[i]=3;
		}
    }
    
    int np[31],v1=0,v2=0,v3=0,np1[31],np2[31],np3[31];
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
				v1=urd2(eng);
	            if (v1>=9)
	                np1[i]=4;
	            else if (v1>=7)
	                np1[i]=3;
	            else if (v1>=4)
	                np1 [i]=2;
	            else
	                np1[i]=1;
	        }
			{
				v2=urd2(eng);
	            if (v2>=9)
	                np2[i]=4;
	            else if (v2>=7)
	                np2[i]=3;
	            else if (v2>=4)
	                np2[i]=2;
	            else
	                np2[i]=1;
	        }
			np[i]=np1[i]+np2[i];
	    }
	    else
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
	            if (v2>=9)
	                np2[i]=4;
				else if (v2>=7)
	                np2[i]=3;
	            else if (v2>=4)
	                np2[i]=2;
	            else
	                np2[i]=1;
	        }
	        {
	            v3=urd2(eng);
	            if (v3>=9)
	                np3[i]=4;
	            else if (v3>=7)
	                np3[i]=3;
	            else if (v3>=4)
	                np3[i]=2;
	            else
	                np3[i]=1;
	        }
	        np[i]=np1[i]+np2[i]+np3[i];
	    }
    }
	Qr[1]=25;
	for(i=2;i<=31;i++)
	{
		check[i]=0;
		Tc[i]=0;
		Qr[i]=Qr[i-1]-np[i-2]-Bo[i-1];
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
			}
			if (check[i-1]==0)
			{
				check[i]=1;		//you can order
				Co[i]=45;
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
		if (check[i-2]==1)
		{
			Qr[i-1] = Qr[i-1]+25;
		} 
		Tc[i]=Co[i]+Ch[i]+Cs[i];
		printf("|%3d| %8d| %19d|  %23d|  %24d|  %19d|  %11.1f|  %12d|  %12d|  %9.1f|",i-1,Qr[i-1],y[i-2],np[i-2],Qr[i],Bo[i],Ch[i],Co[i],Cs[i],Tc[i]);
    	printf("|___|_________|____________________|_________________________|__________________________|_____________________|_____________|______________|______________|___________|");
	}
	cout << "\nThe randomed numbers that inputed into simulation model" << endl;
	cout << "=======================================================" << endl;
	for(i=0;i<30;i++)
	{
		cout << "In day " << i+1 << endl;
		if (y[i]==0||y[i]==1)
		{
			cout << "Number of custumer is " <<y[i] << endl;
		}
		if (y[i]>1)
		{
			cout << "Number of custumers are " <<y[i] << endl;
		}
		if (np[i]==0||np[i]==1)
		{
			cout << "Number of purchase item is " <<np[i] << endl;
		}
		if (np[i]>1)
		{
		cout << "Number of purchase items are " << np[i] << endl;
		}
		cout << "-------------------------------" << endl;
	}
	sum=0;
	for(i=2;i<=31;i++)
	{
		sum+=Tc[i];
	}
	Avg=sum/30;
	cout << "Average is " << Avg;
	return Avg;
}

