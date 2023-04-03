#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src
 * @dest: pointer
 * @src: pointer
 * @n: integer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
