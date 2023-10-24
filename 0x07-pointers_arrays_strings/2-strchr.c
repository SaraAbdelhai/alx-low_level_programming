#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string.
 * @s: string
 * @c: character
 *
 * Return: pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;

		while (1)
		{
			a = *s++;
			if (i == c)
			{
				return (i - 1);
			}
			if (i == 0)
			{
				return (NULL);
			}
		}
}
