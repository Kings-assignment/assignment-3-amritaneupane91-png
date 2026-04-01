// Write a recursive function named calculateSumOfDigits that takes an integer n as input and returns the sum of its digits.

#include<stdio.h>
int calculateSumOfDigits(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        return (n%10) + calculateSumOfDigits(n/10);
    }
}
int main(){
    int n;

    printf("Enter a number:");
    scanf(" %d", &n);

    int result=calculateSumOfDigits(n);

    printf("The sum of digits is %d", result);

    return 0;
}
