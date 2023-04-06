#include <stdio.h>
#include <stdlib.h>

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
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");
	return (0);
}
