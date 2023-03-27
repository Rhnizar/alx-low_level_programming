#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int	len;

	len = _strlen(s);
	while (len)
		putchar(s[len--]);
}
