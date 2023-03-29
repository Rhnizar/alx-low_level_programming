#include "main.h"
#include <stdlib.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int *b;
	int tmp;

	i = 0;
	j = 0;
	tmp = n;
	b = malloc(sizeof(int) * n);
	while (n != 0)
	{
		b[i] = a[n - 1];
		i++;
		n--;
	}
	i = 0;
	while (tmp != 0)
	{
		a[i] = b[i];
		i++;
		tmp--;
	}
}
