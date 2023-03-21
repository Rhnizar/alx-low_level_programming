#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0 ()
 */

int main(void)
{
	int f1;
	int	i;
	int	f2;
	int	res;

	res = 0;
	i   = 0;
	while (i <= 50)
	{
		f1 = i;
		f2 = i + 1;
		res = f1 + f2;
		i++;
	}
	printf("%d", res);
	return (0);
}

