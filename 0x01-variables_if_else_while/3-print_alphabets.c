#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	char c1, c2;

	c1 = 'a';
	c2 = 'A';

	while (c1 <= 'z')
	{
		putchar(c1);
		c1++;
	}
	while (c2 <= 'Z')
	{
		putchar(c2);
		c2++;
	}
	putchar('\n');
	return (0);
}
