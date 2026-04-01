// Write a recursive function named printTriangle that takes an integer n as input and prints a triangle of asterisks (*) with n rows.

#include<stdio.h>
int printTriangle(int n)
{
    if(n==0)
    {
        return 1;
    }
    printTriangle(n-1);

    for (int i=0; i<n; i++)
    {
        printf(" *");
    }
    printf("\n");
    return 1;
}
int main()
{
    int n,result;

    printf("Enter the number of rows:");
    scanf(" %d", &n);

    result=printTriangle(n);
    printf("Triangle:%d\n", result);

    return 0;
}
