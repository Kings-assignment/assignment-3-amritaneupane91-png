// Write a C program to merge two sorted arrays into a single sorted array.

#include <stdio.h>

int main() {
//[2,4,6,8]x=0
//[3,4,7,9]y=0
//[2,3,4,4,6,7,8,9]z=0
    int n1, n2;

    printf("Enter size of first and second array:");
    scanf("%d %d", &n1, &n2);

    int arr1[n1], arr2[n2];

    printf("Enter the value for first array:");
    for(int i=0; i<n1; i++) scanf("%d", &arr1[i]);

    printf("Enter the value for second array:");
    for(int j=0; j<n2; j++) scanf("%d", &arr2[2]);

    int merged_arr [n1+n2];

    int x=0, y=0, z=0;

    while (x<n1 || y<n2){
        if(arr1[x] < arr2[y]) merged_arr[z++]=arr1[x++];
        else merged_arr[z++]=arr2[y++];
    }

     while (x<n1) merged_arr[z++] = arr1[x++];
    while (y<n2) merged_arr[z++] = arr2[y++];

    printf("Merged array: ");
    for(int k=0; k<n1+n2; k++) printf("%d ", merged_arr[k]);
    printf("\n");


    return 0;

}

