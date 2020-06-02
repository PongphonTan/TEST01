#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <random>
#include<time.h>
using namespace std;

int rand1( int n[], int i);
int cus(int n[], int i,int y[]);
int purchase (int n[],int y[], int i);

int main()
{
    float tc = 0, ch = 0, atc = 0;
    int q = 25, co = 0, cs = 0, oo = 0, oa, nc = 0, np = 0, rq = 0;
    int i=0,n[30],y[30];

    cout<< "\ncustomer : \n"<< cus(n,i,y);
    cout<< "\n\n total purchase : \n" << purchase(n,y,i);



    printf(" \n\n q  n nc np rq   ch co cs tc \n");
    for (int n = 1; n <= 30; ++n)
    {
        if (n == oa)
        {
            q += 25;
            oo = 0;
        }
        nc = 3;
        np = 6;
        rq = q - np;
        if (rq > 0)
        {
            ch = rq * 0.5;
        }
        if (rq <= 10 and oo == 0)
        {
            co = 45;
            oa = n + 2;
            oo = 1;
        }
        if (rq < 0)
        {
            cs = abs(rq) * 0.5;
        }
        tc = ch + co + cs;
        atc += tc;
        printf("%2d %2d %2d %2d %2d %4.1f %2d %2d %2.2f\n",q,n,nc,np,rq,ch,co,cs,tc);
        q = rq;
        tc = 0;
        co = 0;
        ch = 0;
        cs = 0;
    }
    atc = atc / 30;
    printf("atc = %2.2f\n", atc);
    return 0;
}

int rand1( int n[], int i)
{
    srand(time(NULL));
    for(i=0;i<30;i++)
    {
        n[i] = rand()%20;
        cout << n[i] << "\t";
    }
    cout << endl << endl<<endl;
    return 0;
}

int cus(int n[], int i,int y[])
{
    n[i]=rand1(n,i);
    for(i=0;i<30;i++)
    {
        if(n[i]>=16)
            y[i]=3;
        else if(n[i]>=11)
            y[i]=2;
        else if(n[i]>=3)
            y[i]=1;
        else
            y[i]=0;
    }

    {
    for(i=0;i<30;i++)
        cout << y[i] << "\t";
    }
    return 0;
}

int purchase (int n[],int y[], int i)
{
    int np[10],v1=0,v2=0,v3=0,np1[10],np2[10],np3[10];
    //y[i]=cus(n,i,y);

    for(i=0;i<30;i++)
    {
    if(y[i]==0)
        np[i]=0;
    else if(y[i]==1)
    {
        v1=rand()%10;
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
                    v1=rand()%10;
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
                    v2=rand()%10;
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
                cout << np1[i] << "." <<np2[i] << ".";
    }
        }
            else
            {

                {
                    {
                        v1=rand()%10;
                    if(v1>=9)
                        np1[i]=4;
                    else if(v1>=7)
                        np1[i]=3;
                    else if(v1>=4)
                        np1[i]=2;
                    else
                        np1[i]=1;}
                    {
                        v2=rand()%10;
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
                        v3=rand()%10;
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
                cout << np1[i] <<"."<<np2[i]<<"."<<np3[i]<<".";

                    }
        cout << np[i] << "\t";
            }
     return 0;
    }
