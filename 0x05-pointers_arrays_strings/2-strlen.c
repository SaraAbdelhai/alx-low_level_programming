#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
 * @s: string parameter input
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int counter = 0;
	int i = 0;

	while (*(s + i) != 0)
	{
		count += 1;
		i++;
	}
	return (count);
}
