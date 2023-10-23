#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte.
 * @s:  memory area pointed to put the constant
 * @b: constant
 * @n: number of byts to use
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
