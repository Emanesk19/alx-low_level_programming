#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int len = 0, i, t = 0;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	t = len - 1;
	for (i = 0 ; i <= t ; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}