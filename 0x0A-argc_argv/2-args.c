#include <stdio.h>

/**
 * main - prints its name
 * @argc: count arguments
 * @argv: value arguments
 * Return: 0 is SUCCESS
 */
int main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
		printf("%s\n", argv[i++]);
	return (0);
}
