#include<stdio.h>

/*
 * main - print _putchar
 *
 * Return: 0 (SUCCESS)
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d", 98);
	}
	else
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d", 98);
	}
	printf("\n");
}

/*int main(void)
{
	print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
	return (0);
}*/
