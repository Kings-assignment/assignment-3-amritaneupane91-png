// Implement a C program to count the occurrence of a specific character in a string.

#include <stdio.h>
#include<ctype.h>
int main(){

    char str[100];
    int i, count=0;
    char ch;

    printf("Enter a string:");
    scanf(" %s", str);

    printf("Enter the character to count:");
    scanf(" %c", &ch); 

    for (i=0; str[i]!='\0'; i++)
    {
       if (tolower(str[i])==tolower(ch))
        {
            count++;
        }
    }
    printf(" %c comes %d times in the string %s\n", ch, count, str);
    return 0;
}
