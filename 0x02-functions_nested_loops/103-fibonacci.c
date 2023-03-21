#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0 ()
 */

int main(void)
{
	long int f1;
	int	i;
	long int	f2;
	long int	res;
	long int	res2;

	f1 = 1;
	f2 = 2;
	i  = 3;
	res = 0;
	res2 = 2;
	while (i <= 50)
	{
		res = f2 + f1;
		if (res % 2 == 0)
			res2 += res;
		f1 = f2;
		f2 = res;
		i++;
	}
	printf("%ld\n", res2);
	return (0);
}

