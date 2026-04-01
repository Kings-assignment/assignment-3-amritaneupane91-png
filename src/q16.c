// Write a function named reverseArray that takes an array of integers as input and reverses the order of the elements in the array.

#include<stdio.h>
int reverseArray (int arr[],int size)
{
    for ( int i=0; i<size/2; i++)
    {
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    return 1;
}
int main(){
    int arr[100];
    int n, result;

    printf("Enter the no. of integers:");
    scanf(" %d", &n);

    printf("Enter the integers:");
    for (int i=0; i<n; i++)
    {
        scanf(" %d", &arr[i]);
    }
    result=reverseArray (arr,n);

    printf("After reversing:");
    for (int i=0; i<n; i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}
