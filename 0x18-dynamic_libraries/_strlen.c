#include "main.h"

/*
 * _strlen - lenght the string
 * s : char pointer
 */

int	_strlen(char *s)
{
	int len;

	len = 0;
	while(s[len])
		len++;
	return (len);
}
