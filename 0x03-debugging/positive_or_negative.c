#include "main.h"

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else if (i > 0)
			printf("%d is posetive", i);
	else
		printf("%d is zero", i);
}
