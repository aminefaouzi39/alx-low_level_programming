#include "main.h"
/**
 * print_rev - Entry point
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	for (i--; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
