#include <iostream>


int fact(int n);

int main()
{
    int n;
    printf("Enter n = ");
    // scanf("%d", n);
    // if (n > 15) {
    //     printf("Input error, please enter number between 0 - 15");
    // }
    printf("not enter if statement");
    return 0;
}

int fact(int n)
{
    printf("%d! is recursive case. Answer = %d * ", n);
    if (n > 1 ) {
        printf("resursion of %d!\tRecursion to calculate %d!", n-1);
        return n * fact(n-1);
    }
    else {
        printf("0! is base case return answer of 0! = 1");
        printf("Calsulate 0! complete.");
        printf("    Return answer from %d! = to calculate ");
        return 1;
    }
}