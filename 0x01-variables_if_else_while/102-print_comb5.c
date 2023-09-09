#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int i, j;

	i = 0;

	while (i < 100)
	{
		j = i;
		while (j < 100)
		{
			if ((i / 10) != 0 && (i % 10) != 0 && (j / 10) != 0 && (j % 10) != 0)
			{	
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			}
			if (i < 98 || j < 99)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
