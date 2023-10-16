#include "main.h"

/**
 * char *_strcpy -  copies the string pointed to by src
 * @dest: chart type string
 * @src: char type string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int i = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[i] = src[i];
	}
	dest[l] = '\0';
	return (dest);
}
