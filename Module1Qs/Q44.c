// Write a program to check if a character is a vowel or consonant

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a charater : ");
    scanf("%c", &ch);
    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? printf("The Charater is vowel") : printf("The charater is consonant");
    return 0;
}