// Write a function named calculatePower that takes two integers, base and exponent, as input and returns the result of raising the base to the exponent.

#include<stdio.h>
int calculatePower(int base, int exponent)
{
    int result=1;

    for( int i=0; i<exponent; i++)
    {
        result=result*base;
    }
    return result;
}

int main(){
    int base, exponent;

    printf("Enter the base:");
    scanf(" %d",&base);

    printf("Enter the exponent:");
    scanf(" %d",&exponent);

    int result=calculatePower(base,exponent);

    printf("The power is %d\n",result);

    return 0;
}

