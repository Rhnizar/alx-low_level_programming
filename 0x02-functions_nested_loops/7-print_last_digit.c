#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print_last_digit
 * @r: variable integer
 * Return: 0 (SUCCESS)
 */
int print_last_digit(int r)
{
	int	res;

	if (r < 0)
	{
		_putchar('-');
		r *= -1;
		res = r % 10;
		_putchar(res + 48);
		return (res * -1);
	}
	else
	{
		res = r % 10;
		_putchar(res + 48);
	}
	return (res);
}

