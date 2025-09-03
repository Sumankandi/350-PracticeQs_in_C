#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    (ch >= '0' && ch <= '9') ? printf("'%c' is a digit.\n", ch) : printf("'%c' is NOT a digit.\n", ch);

    return 0;
}
