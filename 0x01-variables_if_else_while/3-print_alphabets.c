#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	char c1,c2;

	c1 = 'a';
	c2 = 'A';

	while (c1 <= 'z' && c2 <= 'Z')
	{
		putchar(c1);
		putchar(c2);
		putchar('\n');
		c1++;
		c2++;
	}
	return (0);
}
