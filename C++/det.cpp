#include <iostream>
#include<math.h>

int determ(int a[3][3],int n) {
  int det=0, p, h, k, i, j, temp[3][3];
  if(n==1) {
    return a[0][0];
  } else if(n==2) {
    det=(a[0][0]*a[1][1]-a[0][1]*a[1][0]);
    return det;
  } else {
    for(p=0;p<n;p++) {
      h = 0;
      k = 0;
      for(i=1;i<n;i++) {
        for( j=0;j<n;j++) {
          if(j==p) {
            continue;
          }
          temp[h][k] = a[i][j];
          k++;
          if(k==n-1) {
            h++;
            k = 0;
          }
        }
      }
      det=det+a[0][p]*pow(-1,p)*determ(temp,n-1);
    }
    return det;
  }
}

int main()
{
  int a[5][5] = {{1,2,9,7,8},{4,5,6,5,6},{7,8,10,10,14},{1,2,4,5,7},{6,8,7,9,10}}; //array of matrix
  int n = sizeof(a)/sizeof(a[0]); // dimension of array
  int det = determ(a,n); // call function to find det of array "a"
  std::cout<<det<<" "<<n<<std::endl; // print det value
  return 0;
}
