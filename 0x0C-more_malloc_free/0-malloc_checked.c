#include "main.h"
/**
 * malloc_checked - check malloc
 *@b u i
 */
void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(sizeof(char) * 5);
	if (!str)
		return (98);
	else
		return (str);
}
