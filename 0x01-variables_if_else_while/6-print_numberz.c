#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;

	for (i = 0 ; i < 10 ; i++)
		putchar((i % 10)+i);
	putchar('\n');
	return (0);
}
