#include <stdio.h>
#include "main.h"

/**
 * _islower -  _islower
 * c:  integer value
 * Return: 0 (SUCCESS)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

