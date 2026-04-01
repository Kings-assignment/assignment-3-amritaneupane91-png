// Write a C program to check if a given string is a palindrome.

#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    int i , length;
    int isPalindrome=1; 

    printf("Enter a string:");
    scanf("%s", str);

    for(i=0; str[i]; i++){
        str[i]= tolower(str[i]);
    }

    length=strlen(str);

    for(i=0; i<length/2; i++)
    {

        if(str[i] != str[length-i-1])
        {
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome)
    {
        printf("%s is a palindrome",str);
    }
    else{
        printf("%s is not a palindrome",str);
    }
    return 0;
}

