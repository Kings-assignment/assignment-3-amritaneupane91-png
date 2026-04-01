// Write a C program to merge two sorted arrays into a single sorted array.

#include<stdio.h>
int main(){
    int n1,n2;

    printf("Enter the size of the first array:");
    scanf(" %d",&n1);

    printf("Enter the size of the second array:");
    scanf(" %d",&n2);

    int arr1[n1], arr2[n2];

    printf("Enter the value of first array:");
    for (int i=0; i<n1; i++) 
    scanf(" %d", &arr1[i]);

    printf("Enter the value of second array:");
    for (int j=0; j<n2; j++) 
    scanf(" %d", &arr2[j]);

    int x=0, y=0, z=0;

    int merged_arr[n1+n2];

    while(x<n1 || y<n2)
    {
        if (arr1[x]<arr2[y]) merged_arr[z++]=arr1[x++];
            else
            merged_arr[z++]=arr2[y++];

    }
    printf("Merged array:");
    for (int k=0; k<n1+n2; k++)
    printf(" %d",merged_arr[k]);
    printf("\n");

    return 0;   
}


