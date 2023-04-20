#include "variadic_functions.h"

/**
 * sum_them_all - sun the all parametrs
 * @n : firsta parm
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	if (n == 0)
		return (0);
	va_list *arg;
	va_start(arg, n);
	while (n--)
		res += va_arg(arg, unsigned int);
	va_end(argp);
	return (res);
}
