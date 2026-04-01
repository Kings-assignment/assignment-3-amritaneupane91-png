// Write a recursive function named calculateFibonacci that takes an integer n as input and returns the nth Fibonacci number. The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding numbers.

#include<stdio.h>
int calculateFibonacci (int num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num==1){
        return 1;
    }
    else{
        return calculateFibonacci(num-1) + calculateFibonacci(num-2); 
    }
}
int main()
{
    int num, result;

    printf("Enter a number:");
    scanf(" %d", &num);

    result=calculateFibonacci(num);

    printf("Fibonacci (%d) = %d",num, result);

    return 0;
}
