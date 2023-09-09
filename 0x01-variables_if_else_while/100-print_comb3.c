#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1 ; i < 100 ; i++)
	{
		putchar((i % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}

