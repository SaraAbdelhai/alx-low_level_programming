#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be used.
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{

	}

	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[len_dest + i] = src[i];
	}

	return (dest);
}
