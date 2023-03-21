#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0 ()
 */

int main(void)
{
	unsigned long int	f1;
	int			i;
	unsigned long int	f2;
	unsigned long int	res;

	f1 = 1;
	f2 = 2;
	i  = 3;
	res = f1;
	printf("%lu, %lu, ", f1, f2);
	while (i <= 92)
	{
		res = f2 + f1;
		printf("%lu, ", res);
		f1 = f2;
		f2 = res;
		i++;
	}
	printf("\n");
	return (0);
}

