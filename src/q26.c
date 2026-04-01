// Write a recursive function named reverseString that takes a string as input and returns the reversed string.

#include<stdio.h>
#include<string.h>
int reverseString (char str[], int i, int j)
{
    if(i>=j){
        return 1;
    }
    char temp= str[i];
    str[i]=str[j];
    str[j]=temp;

    return reverseString(str, i+1, j-1);
}
int main(){
    char str[100];
    int result;

    printf("Enter a string:");
    scanf(" %s", str);

    int length=strlen(str);

    result=reverseString(str, 0, length-1);

    if(result==1)
    {
        printf("Reversed string is %s", str);
    }
    return 0;
}
