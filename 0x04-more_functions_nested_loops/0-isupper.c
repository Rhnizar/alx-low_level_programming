#include <stdio.h>
#include "main.h"

/**
 * _isupper - is upper
 * @c: v i
 * Retrun: 0 || 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
