#include<stdio.h>

/*
 * main - print _putchar
 *
 * Return: 0 (SUCCESS)
 */
int print_last_digit(int r)
{
	if (r < 0)
		r *= -1;
	printf("%d", r % 10);
	return (r % 10);
}

/*int main(void)
{
	 int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    putchar('0' + r);
    putchar('\n');
	return (0);
}*/
