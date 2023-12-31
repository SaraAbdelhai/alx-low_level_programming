#include "main.h"

/**
 * _strncpy - a function that copies a string.
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be used.
 * Return: destination char pointer to the string.
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
