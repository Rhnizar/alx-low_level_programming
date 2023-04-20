#include "variadic_functions.h"

/**
 * print_numbers - print number
 * @n : number param
 * @separator : sep
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int	i;
	va_list	arg;

	if (!n)
		printf("\n");
	if (!separator)
		separator = "";
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
