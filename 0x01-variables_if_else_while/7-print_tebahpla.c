#include <stdio.h>

/**
 * main -  main function
 *
 * Return: always 0
 */
int main(void)
{
	char c1;

	c1 = 'z';

	while (c1 >= 'a')
	{
		putchar(c1);
		c1--;
	}
	putchar('\n');
	return (0);
}
