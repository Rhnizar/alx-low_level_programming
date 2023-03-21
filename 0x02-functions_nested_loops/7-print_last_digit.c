#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print_last_digit
 * @r: variable integer
 * Return: 0 (SUCCESS)
 */
int print_last_digit(int r)
{
	if (r < 0)
		r *= -1;
	printf("%d", r % 10);
	return (r % 10);
}

