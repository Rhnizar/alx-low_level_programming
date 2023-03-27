#include "main.h"

/**
 * print_rev - print string in reverse
 * @str: string
 */
void print_rev(char *s)
{
	int	len;
	len = _strlen(s);
	while (s[len])
		putchar(s[len--]);
}
