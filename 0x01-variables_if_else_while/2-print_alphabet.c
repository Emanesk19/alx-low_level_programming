#include <stdio.h>

/**
 * main - main function 
 *
 * Return: always 0
 */
int main(void)
{
	char c;
	c='a';

	while(c <= 'z')
	{
		put(c);
		c++;
	}
	put("\n");
	return (0);
}
