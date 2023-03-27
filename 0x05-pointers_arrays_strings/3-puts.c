#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 */
void _puts(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		putchar(str[i++]);
	putchar('\n');
}
