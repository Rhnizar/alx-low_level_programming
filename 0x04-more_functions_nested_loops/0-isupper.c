#include <stdio.h>

/**
 * _isupper - is upper
 * @c: v i
 * Retrun: 0 (SUCCESS)
 */
int	_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
