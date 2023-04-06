#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints its name
 * @argc: count arguments
 * @argv: value arguments
 * Return: 0 is SUCCESS and return 1 is failed
 */
int main(int argc, char **argv)
{
	int	i;
	int	j;
	int	res;

	i = 1;
	res = 0;
	if (argc > 1)
	{
		while (argv[i])
		{
			j = 0;
			while (isdigit(argv[i][j]) == 1)
				j++;
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		i = 0;
		while (argv[i])
		{
			res += atoi(argv[i]);
			i++;
		}
		printf ("%d\n", res);
	}
	else
		printf("0\n");
	return (0);
}
