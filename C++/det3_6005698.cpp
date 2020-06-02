#include <stdio.h>
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
   int m, n, c, d, k, s=0 ,  A[10][10], B[10][10], C[10][10], D[10][10] ,a[10][10];
  int E[10][10];
  cout<<" Hello my name is JUthamas Aonkrathok 6005698 \n\n\n\n ";
   printf("Enter the number of rows-----> ");
   cin>>m;
   printf("Enter the number of columns------> ");
   cin>>n;
   printf("Enter the elements of A\n");
 if((m>1&&m<7)&&(n>1&&n<7)){

   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &A[c][d]);

   printf("Enter the elements of B\n");
 
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &B[c][d]);
 cout<<"------------------------------------------------------------";
printf(" \n \n");
   printf("1.)  C = \n \n");
 
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         C[c][d] = A[c][d] + 2 * B[c][d];
         printf("%d\t", C[c][d]);
      }
      printf("\n");
   }
   printf("\n");
   
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         D[d][c] = B[c][d];}
     }
  cout<<"------------------------------------------------------------\n";
         printf("2.)D = \n \n");
 for (c = 0; c < n; c++) {
      for (d = 0; d < m; d++)
         printf("%d\t", D[c][d]);
      printf("\n");
   }
   printf("\n");
   
   for (c = 0; c < m; c++) {
      for (d = 0; d < m; d++) {
        for (k = 0; k < n; k++) {
          s += A[c][k] * D[k][d];
        }
 
        E[c][d] = s;
        s = 0;
      }
    }
 cout<<"------------------------------------------------------------\n";
    printf("3.) E = \n \n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < m; d++)
        printf("%d\t", E[c][d]);
 
      printf("\n");
    } 
}
cout<<"------------------------------------------------------------\n";
cout<<"4.) DET (E)= \n\n ";

int i,j;
float det=0;

 if(m==2&&n==2) {
  	float det ;
 
    
  	for (c = 0; c < m; c++){
	  for (d = 0; d < n; d++)
    det= (E[0][0]*E[1][1])-(E[0][1]*E[1][0]);
    
    }
    cout<<"Determinant is  "<<det;
    printf("\n");
    cout<<"\n\n 5.) Inverse of matrix is: \n";
    for(i = 0; i <n ; i++){
        for(j = 0; j < n; j++)
            cout<<((E[(j+1)%n][(i+1)%n] * E[(j+2)%n][(i+2)%n]) - (E[(j+1)%n][(i+2)%n] * E[(j+2)%n][(i+1)%n]))/ det<<"\t";
        
        cout<<"\n";}
   
   
    cout<<"------------------------------------------------------------\n";
}else if( n==3){

for( i= 0; i < 3; i++){
det = det + (E[0][i] * (E[1][(i+1)%3] * E[2][(i+2)%3] - E[1][(i+2)%3] * E[2][(i+1)%3]));
    cout<<"\n\ndeterminant: "<<det<<endl;
    
    
    cout<<"------------------------------------------------------------\n";
    cout<<"\n\n 5.) Inverse of matrix is: \n";
   
    for(i = 0; i <n ; i++){
        for(j = 0; j < n; j++)
            cout<<((E[(j+1)%n][(i+1)%n] * E[(j+2)%n][(i+2)%n]) - (E[(j+1)%n][(i+2)%n] * E[(j+2)%n][(i+1)%n]))/ det<<"\t";
        
        cout<<"\n";}
		} }else if (n==4){
    for(i=0;i<5;i++);
   det=    	E[0][3] * E[1][2] * E[2][1] * E[3][0] - E[0][2] * E[1][3] * E[2][1] * E[3][0] -
         E[0][3] * E[1][1] * E[2][2] * E[3][0] + E[0][1] * E[1][3] * E[2][2] * E[3][0] +
         E[0][2] * E[1][1] * E[2][3] * E[3][0] - E[0][1] * E[1][2] * E[2][3] * E[3][0] -
         E[0][3] * E[1][2] * E[2][0] * E[3][1] + E[0][2] * E[1][3] * E[2][0] * E[3][1] +
         E[0][3] * E[1][0] * E[2][2] * E[3][1] - E[0][0] * E[1][3] * E[2][2] * E[3][1] -
         E[0][2] * E[1][0] * E[2][3] * E[3][1] + E[0][0] * E[1][2] * E[2][3] * E[3][1] +
         E[0][3] * E[1][1] * E[2][0] * E[3][2] - E[0][1] * E[1][3] * E[2][0] * E[3][2] -
         E[0][3] * E[1][0] * E[2][1] * E[3][2] + E[0][0] * E[1][3] * E[2][1] * E[3][2] +
         E[0][1] * E[1][0] * E[2][3] * E[3][2] - E[0][0] * E[1][1] * E[2][3] * E[3][2] -
         E[0][2] * E[1][1] * E[2][0] * E[3][3] + E[0][1] * E[1][2] * E[2][0] * E[3][3] +
         E[0][2] * E[1][0] * E[2][1] * E[3][3] - E[0][0] * E[1][2] * E[2][1] * E[3][3] -
         E[0][1] * E[1][0] * E[2][2] * E[3][3] + E[0][0]* E[1][1] * E[2][2] * E[3][3];	
    	
    	
    	cout<<"Determinant is  "<<det;
    	cout<<"\n\n 5.) Inverse of matrix is: \n";
   
    for(i = 0; i <n ; i++){
        for(j = 0; j < n; j++)
            cout<<((E[(j+1)%n][(i+1)%n] * E[(j+2)%n][(i+2)%n]) - (E[(j+1)%n][(i+2)%n] * E[(j+2)%n][(i+1)%n]))/ det<<"\t";
        
        cout<<"\n";}
	}else if(n==5) {
	int h ,k,temp[10][10];
	det=0;
    for(c=0;c<n;c++) {
      h = 0;
      k = 0;
      for(i=1;i<n;i++) {
        for( j=0;j<n;j++) {
          if(j==c) {
            continue;
          }
          temp[h][k] = E[i][j];
          k++;
          if(k==n-1) {
            h++;
            k = 0;
          }
        }
      }
      
      det+=E[0][c]*pow(-1,c)*(temp,n-4);
	}
    cout<<det;
    cout<<"\n\n 5.) Inverse of matrix is: \n";
   
    for(i = 0; i <n ; i++){
        for(j = 0; j < n; j++)
            cout<<((E[(j+1)%n][(i+1)%n] * E[(j+2)%n][(i+2)%n]) - (E[(j+1)%n][(i+2)%n] * E[(j+2)%n][(i+1)%n]))/ det<<"\t";
        
        cout<<"\n";}
 return det; 
 
}

else if(n==6) {
	int h ,k,temp[10][10];
	det=0;
    for(c=0;c<n;c++) {
      h = 0;
      k = 0;
      for(i=1;i<n;i++) {
        for( j=0;j<n;j++) {
          if(j==c) {
            continue;
          }
          temp[h][k] = E[i][j];
          k++;
          if(k==n-1) {
            h++;
            k = 0;
          }
        }
      }
      
      det+=E[0][c]*pow(-1,c)*(temp,n-5);
	}
    cout<<det;
    cout<<"\n\n 5.) Inverse of matrix is: \n";
   
    for(i = 0; i <n ; i++){
        for(j = 0; j < n; j++)
            cout<<((E[(j+1)%n][(i+1)%n] * E[(j+2)%n][(i+2)%n]) - (E[(j+1)%n][(i+2)%n] * E[(j+2)%n][(i+1)%n]))/ det<<"\t";
        
        cout<<"\n";}
 return det; 
 
 
 
}

}



