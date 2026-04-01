//  Write a recursive function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.

#include<stdio.h>
#include<ctype.h>
int countOccurrences(char str[], char ch)
{
    if (str[0]=='\0')
    {
        return 0;
    }
    if (tolower(str[0])==tolower(ch))
    {
        return 1+ countOccurrences(str+1, ch);
    }
    return countOccurrences(str+1, ch);
}
int main()
{
    char str[100];
    char ch;

    printf("Enter a string:");
    scanf(" %s", str);

    printf("Enter a character to count:");
    scanf(" %c", &ch);

    int count=countOccurrences(str,ch);

    printf("%c appears %d times in %s",ch, count, str);

    return 0;
}
