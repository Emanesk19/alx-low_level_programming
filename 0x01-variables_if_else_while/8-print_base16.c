#include <stdio.h>

/**
 * main - main function 
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	char j;

	i = 0;
	j = 'a';

	while (i < 10)
	{
		putchar('0' + (i % 10));
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
