#include<stdio.h>

/**
 * print_sign - print_sign
 *
 * Return: 0 (SUCCESS)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
        {
                printf("0");
                return (0);
        }
	else
	{
		printf("-");
                return (-1);
        }
}

