#include <stdio.h>
/**
*main - Prints the alphabet
*Return: Always 0 (success)
*/
int main(void)
{
    int n = 97;
    int m = 65;

    while (n <= 122)
    {
        putchar(n);
    }
    while (m <= 90)
    {
        putchar(m);
    }
    putchar('\n')
    return(0);
}