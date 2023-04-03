#include "main.h"

/**
 * _memset - fills the first n bytes of the memory
 * @s: pointer
 * @b: char
 * @n: integer
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n-- > 0)
		s[i++] = b;
	return (s);
}
