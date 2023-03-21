#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print_times_table
 * @n: variable integer
 * Return: 0 ()
 * ft_test - function for fixe problem in betty style
 *
 * @i: v i
 * @j: v i
 * @x: v i
 * @n: v i
 */
void ft_test(int i, int j, int x, int n)
{
	while (j <= n)
	{
		if (j == 0)
			printf("%d,", 0);
		else
		{
			x += i;
			if (x < 10)
			{
				if (j < n)
					printf("   %d,", x);
				else
					printf("   %d", x);
			}
			else if (x < 100)
			{
				if (j < n)
					printf("  %d,", x);
				else
					printf("  %d", x);
			}
			else
			{
				if (j < n)
					printf(" %d,", x);
				else
					printf(" %d", x);
			}
		}
		j++;
	}
}

void print_times_table(int n)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	if (n == 0)
		printf("0\n");
	else if (n >= 0  && n <= 15)
	{
		while (i <= n)
		{
			j = 0;
			x = 0;
			ft_test(i, j, x, n);
			printf("\n");
			i++;
		}
	}
}

