//  Write a function named isPalindrome that takes a string as input and returns 1 if it is a palindrome (reads the same forwards and backwards), and 0 otherwise.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isPalindrome (char str[])
{
    int length;

    for(int i = 0; str[i] != '\0'; i++)
     {
        str[i] = tolower(str[i]);
     }

    length=strlen(str);

    for (int i=0; i<length/2; i++)
    {
        if (str[i] != str[length-i-1])
        {
            return 0; //not palindrome
        }
    }
    return 1;
}
int main(){
    char str[100];
    int result;

    printf("Enter a string:");
    scanf(" %s", str);

    result=isPalindrome(str);

    if(result==1){
        printf("Palindrome\n");
    }
    else{
        printf("Not palindrome\n");
    }
    return 0;
}
