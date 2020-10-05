#include <stdio.h>
#include <string.h>

int main()
{
    int length=0;
    char s[100];
    char r[100];

    printf("Enter a string\n");
    scanf("%s",s);

    for (int i = 0;s[i]; i++)
    {
        length++;
    }

    for (int i = 0; i < length; i++)
    { 
        r[i]=s[length-1-i];
    }

    if (strcmp(s,r)==0)
    {
        printf("Yes, this is a palindrome");
    }
    else
    {
        printf("No, this isn't a palindrome");
    }

    return 0;
}