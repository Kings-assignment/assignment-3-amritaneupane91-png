// Write a C program to sort an array of integers in ascending order using a sorting algorithm of your choice (e.g., bubble sort, selection sort, insertion sort).

#include <stdio.h>

int main() {

    int n, min, max, temp;
    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array:");
    for (int i=0; i<n; i++) scanf("%d", &arr[i]);

    printf("The elements of array are: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
printf("\n");

for(int i=0; i<n-1; i++){
    for(int j=0; j<n-1-i; j++){
        if(arr[j]> arr[j+1]){
            temp= arr[j];
            arr[j]= arr[j+1];
            arr[j+1]= temp;
        }
    }
}
printf("The elements of array after sort are: ");
for(int i=0; i<n; i++)
printf("%d ", arr[i]);
printf("\n");

return 0;
}
