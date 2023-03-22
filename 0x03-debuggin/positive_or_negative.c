#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative- positive or negative number
 * @i: vriable integer 
 * Return: 0
 */
int positive_or_negative(int i)
{
	if (i == 0)
		printf("%d is zero\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	return (0);
}
