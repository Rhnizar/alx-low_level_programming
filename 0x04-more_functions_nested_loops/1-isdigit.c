#include "main.h"
#include <stdio.h>

/**
 * _isdigit- is digit
 * @c: varibale integer
 * Retrun: 0 || 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
