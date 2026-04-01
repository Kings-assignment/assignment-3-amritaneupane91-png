// Write a C program to concatenate two strings without using the built-in string functions.

#include<stdio.h>
int main(){
    
    char str1[100];
    char str2[100];

    printf("Enter the first string:");
    scanf(" %s", str1);

    printf("Enter the second string:");
    scanf(" %s", str2);

    int i=0;
    while (str1[i]!= '\0')
    {
        i++;
    }

    str1[i]= ' '; //adding a space
    i++;
    
    int j=0;
    while (str2[j]!= '\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }

    str1[i]= '\0';
    printf("The concatenated string is %s", str1);

    return 0;

}
