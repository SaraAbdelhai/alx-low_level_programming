#include "main.h"

/**
 * *_strchr - that locates a character in a string.
 * @s: the string
 * @c: char
 * Return:  pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c);
{
	int i;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
