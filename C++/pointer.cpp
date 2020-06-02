#include<iostream>
using namespace std;
/*
//---------------------------------------------------------

float update(float a[], int i);

int main()
{
    float A[] = {5.6, 4.35};
    cout << "cout: A giving the address: " << A << endl;
    printf("display address with printf %p ", A);
    cout << "\nAfter calling function update()\n";
    // then by assign the array A as the argument of the function the program gonna put the adress of Array
    // into the function directly which effect the actual of stored value in the array A
    float output_1 = update(A,0);
    float output_2 = update(A,1); //give the same effect but differ in the output value
    // the function return the value of A[1]
    printf("the address of A: %p and the output of these variable is A: %.2f %.2f | returned value: %.2f %.2f\n", A, A[0], A[1], output_1, output_2);
    return 0;
}

float update(float* a[], int i)
{
    a[0] = 5.0;
    a[1] = 4.0;
    return a[i];
}
*/

int main() {
    for(int i = 1; i < 10; i++) {
        cout<<i;
    }
    return 0;
}