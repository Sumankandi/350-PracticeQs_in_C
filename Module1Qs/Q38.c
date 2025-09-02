// Write a program to check if a character is an uppercase letter.

#include <stdio.h>
float main()
{
    char ch;
    printf("Enter a character :");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase");
    }
    return 0;
}