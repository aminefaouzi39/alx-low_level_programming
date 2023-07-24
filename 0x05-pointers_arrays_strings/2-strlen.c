#include "main.h"
/**
 * _strlen - swaps the values of two integers
 * @s: string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	return (i);
}
