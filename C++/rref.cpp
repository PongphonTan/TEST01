/************* Gauss elimination for solving linear equations *************/

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int l,n,i,j,k,temp;
    float a[10][10],c,d[10]={0};
    
    cout<<"Enter no. of equation :  ";
    cin>>n; //no. of equatio
    cout<<"Coefficient of all : \n";
    for(i=0;i<n;i++) //input coeff n+1
    {
        cout<<"equation: "<<i+1<< "   ";
        
        for(j=0;j<=n;j++)
            
            cin>>a[i][j]; //input coeff. of n-th eqs.
    }
    for(i=n-1;i>0;i--)        // partial pivoting
    {
        if(a[i-1][0]<a[i][0]) //compare i
            for(j=0;j<=n;j++)
            {
                c=a[i][j];
                a[i][j]=a[i-1][j];
                a[i-1][j]=c;
            }
    }
    //*************** DISPLAY MATRIX*************//
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
            printf("%6.1f",a[i][j]);
        printf("\n");
    }
    //********* changing to upper triangular matrix*************//
    //********* Forward elimination process**************//
    for(k=0;k<n-1;k++)
        for(i=k;i<n-1;i++)
        {
            c= (a[i+1][k]/a[k][k]) ;
            
            for(j=0;j<=n;j++)
                a[i+1][j]-=c*a[k][j];
        }

     // ************DISPLAYING UPPER TRIANGULAE MATRIX***************//

    printf("\n\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
            printf("%6.1f",a[i][j]);
            
        printf("\n");
    }
    //***************** Backward Substitution method****************//

    for(i=n-1;i>=0;i--)
    {
        c=0;
        for(j=i;j<=n-1;j++)
            printf("c:%f a:%f d:%f\n", c,a[i][j],d[j]);
            c=c+a[i][j]*d[j];
            printf("c:%f a:%f d:%f\n", c,a[i][j],d[j]);
        printf("c:%f a:[i][n]%f a:[i][i]:%f d:%f\n", c,a[i][n],a[i][i],d[i]);
        d[i]=(a[i][n]-c)/a[i][i];
        rintf("c:%f a:[i][n]%f a:[i][i]:%f d:%f\n", c,a[i][n],a[i][i],d[i]);
    }
    //******** RESULT DISPLAY *********//
    for(i=0;i<n;i++)
    cout<<d[i]<<endl;


    //getch();
    return 0;
}