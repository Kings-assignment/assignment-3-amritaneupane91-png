// Implement a C program to reverse the elements of an array.

#include <stdio.h>

int main() {

    int n, min, max, temp;
    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array:");
    for (int i=0; i<n; i++) scanf("%d", &arr[i]);

    printf("The elements of array are:");
    for(int i=0; i<n; i++) printf("%d", arr[i]);
printf("\n");

for(int i=0; i<n/2; i++) {
    temp= arr[i];
    arr[i]= arr[n-1-i];
    arr[n-1-i]= temp;
}
printf("The elements of array after revering are:");
for(int i=0; i<n; i++) printf("%d", arr[i]);
printf("\n");

    return 0;
}

