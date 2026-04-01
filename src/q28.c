// Write a recursive function named calculateBinary that takes an integer n as input and returns its binary representation as a string.

#include<stdio.h>
int calculateBinary(int n)
{
    if(n==0)
    {
        return 1;
    }
    calculateBinary(n/2);
    printf("%d", n%2);

    return 1;
}
int main()
{
    int n;

    printf("Enter a number:");
    scanf(" %d", &n);
    
    printf("The binary of %d is ", n);

    if(n==0)
    {
        printf("0");
    }
    else{
        calculateBinary(n);
    }
    return 0;
}
