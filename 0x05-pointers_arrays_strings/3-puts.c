#include "main.h"
/**
 * _puts - updates the value it points to to 98
 * @str: pointer
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
