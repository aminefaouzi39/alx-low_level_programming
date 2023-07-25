#include "main.h"
/**
 * puts2 - Entry point
 * @i: integeer
 * @str: striing
 * Return: Always 0 (Success)
 */

void puts2 (char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
