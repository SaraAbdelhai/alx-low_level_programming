#include "main.h"
/**
 * puts2 -  prints every character of a string
 *
 * starting with the first one
 * @str:  the input
 * Return: print
 */

void puts2(char *str)
{
	int l = 0;
	int i = 0;
	char *x = str;
	int o;

	while (*x != '\0')
	{
		x++;
		l++;
	}
	i = l - 1;
	for (o = 0 ; o <= i ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
