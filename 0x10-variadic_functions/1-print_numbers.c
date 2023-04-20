#include "variadic_functions.h"

/**
 * print_numbers - print number
 * @n : number param
 * @separator : sep
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int	n1 = n - 1;
	va_list	arg;

	if (!n)
		printf("\n");
	if (!separator)
		separator = "";
	va_start(arg, n);
	while (n1--)
		printf("%d%s", va_arg(arg, int), separator);
	printf("%d\n", va_arg(arg, int));
	va_end(arg);
}
