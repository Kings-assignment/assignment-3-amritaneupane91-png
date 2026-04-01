//  Write a function named calculateFactorialSeries that takes an integer n as input and prints the factorial series up to n.

#include <stdio.h>
int calculateFactorialSeries (int n)
{
    int factorial;

    for (int i=1; i<=n; i++)
    {
        factorial=1;
        for (int j=1; j<=i; j++)
        {
            factorial=factorial*j;
        }
        printf("%d! = %d\n",i,factorial);
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter a number for calculating Factorial Series:");
    scanf(" %d", &n);
    
    calculateFactorialSeries(n);
    return 0;
}
