// Write a function named calculateGCD that takes two integers as input and returns their greatest common divisor (GCD).

#include<stdio.h>
int calculateGCD (int num1, int num2)
{
    int temp;

    while(num2!=0)
    {
        temp=num2;
        num2=num1%num2;
        num1=temp;
    }
    return num1;
}
int main()
{
    int num1,num2;
    int result;

    printf("Enter first number:");
    scanf(" %d", &num1);
    printf("Enter second number:");
    scanf(" %d", &num2);

    result=calculateGCD (num1, num2);
    printf("\nGCD of %d and %d is %d",num1, num2, result);
    
    return 0;
}
