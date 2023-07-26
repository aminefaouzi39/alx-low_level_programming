#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return dest;
}

int main(void)
{
	char dest[100] = "Hello";
	char src[] = "World";

	char *result = _strcat(dest, src);
	printf("%s\n", result);

	return (0);
}
