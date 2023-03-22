#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative- positive or negative number
 * @n: vriable integer 
 * Return: 0
 */
int positive_or_negative(int n)
{
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
