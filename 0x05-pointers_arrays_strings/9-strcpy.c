#include "main.h"
#include <stdlib.h>
/**
 * _strcpy - a function that copies the string pointed to by src
 * @src: par
 * @dest: name
 * Return: return
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int c = 0;

	while (src[c] != 0)
	{
		c = c + 1;
	}
	for (i = 0; i < c; i++)
	{
		dest[i] = src[i];
	}
	dest[c] = '\0';
	return (dest);
}
