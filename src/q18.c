// Write a function named findPrimeNumbers that takes an integer n as input and prints all prime numbers from 1 to n.

#include <stdio.h>
int findPrimeNumbers (int n)
{
    int isPrime;
    int count=0;

    printf("Prime Numbers from 1 to %d\n",n);

    for (int i=2; i<=n; i++)
    {
        isPrime=1;
        for (int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                isPrime=0;
                break;
            }
        }
        if (isPrime==1)
        {
            printf(" %d", i);
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    int Prime;

    printf("Enter a number:");
    scanf(" %d", &n);

    Prime=findPrimeNumbers(n);

    printf("\nTotal Prime Numbers: %d\n", Prime);
    return 0;
}
