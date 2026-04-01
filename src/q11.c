// Write a function named calculateAverage that takes an array of integers as input and returns the average of the numbers.

#include <stdio.h>
float calculateAverage (float arr[], int size)
{
    int sum=0;
    float average;

    for (int i=0; i<size; i++)
    {
        sum=sum+arr[i];
    }
    average=(float)sum/size;
    return average;
}
int main(){
    float arr[100];
    int n;
    float avg;

    printf("Enter the no. of integers:");
    scanf(" %d", &n);

    printf("Enter %d no. of integers\n",n);
    for (int i=0; i<n; i++)
    {
        printf("Number %d:",i+1);
        scanf(" %f" , &arr[i]);
    }

    avg=calculateAverage (arr,n);
    printf("\nAverage: %.2f\n",avg);

    return 0;
}
