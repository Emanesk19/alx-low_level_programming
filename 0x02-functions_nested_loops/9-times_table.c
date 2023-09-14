#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0 ; i < 10 ;i++)
	{
		j=0;
		for (j = 0 ; j < 10  ; j++)
		{
			k = i * j;
			_putchar(k + '0');
		}
		_putchar(' ');
	}
}
