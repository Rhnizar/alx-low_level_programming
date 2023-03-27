#include "main.h"
/**
 * swap_int - swaps that values
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
