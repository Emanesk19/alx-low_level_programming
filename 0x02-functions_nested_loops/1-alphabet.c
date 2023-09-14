#include "main.h"

/**
 * print_alphabet - print all alphabet in lower case 
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	return (0);
}
