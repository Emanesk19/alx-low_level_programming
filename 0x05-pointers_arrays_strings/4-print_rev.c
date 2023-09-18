#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int len = 0, c;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (c = len ; c > 0 ; c++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
