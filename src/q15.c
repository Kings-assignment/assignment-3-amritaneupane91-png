// Write a function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string and returns the number of times the character appears in the string.
#include<stdio.h>
#include<ctype.h>
int countOccurrences (char str[], char ch)
{
    int count=0;

    for (int i=0; str[i]; i++)
    {
        str[i]=tolower(str[i]);
    }

    for (int i=0; str[i] != '\0'; i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    return count;
}
int main(){
    char str[100];
    char ch;
    int result;

    printf("Enter a string:");
    scanf(" %s", str);

    printf("Enter character to count:");
    scanf(" %c", &ch);

    result=countOccurrences (str, ch);
    printf("%c comes %d times in the string %s",ch, result, str);

    return 0;
}   
