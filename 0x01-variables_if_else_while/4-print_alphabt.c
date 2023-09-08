#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	char c1;

	c1 = 'a';

	while (c1 <= 'z')
	{
		if (c1 != 'e' && c1 != 'q')
		putchar(c1);
		c1++;
	}
	putchar('\n');
	return (0);
}
