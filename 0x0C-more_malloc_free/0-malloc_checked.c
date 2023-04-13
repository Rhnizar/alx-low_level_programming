#include "main.h"
/**
 * malloc_checked - check malloc
 *@b u i
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (!str)
		return (98);
	else
		return (str);
}
