// Write a recursive function named calculateFactorial that takes an integer n as input and returns its factorial.

#include<stdio.h>
int calculateFactorial (int num)
{
    if (num==0 || num==1)
    {
        return 1;
    }
    else{
        return num * calculateFactorial(num-1);
    }
}
int main()
{
    int num, result;
    
    printf("Enter a number:");
    scanf(" %d", &num);

    result=calculateFactorial(num);

    printf("The factorial is %d\n",result);

    printf("%d! = %d",num, result);

    return 0;
}
