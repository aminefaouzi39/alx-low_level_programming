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
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
