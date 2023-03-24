#include <stdio.h>
#include "main.h"

/**
 * _isdigit - is digit
 * @c: v i
 * Retrun: 0 (SUCCESS)
 */
int	_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
