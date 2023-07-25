#include "main.h"
/**
 *
 */

void rev_string(char *s)
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
	
