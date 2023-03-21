#include<stdio.h>

/*
 * main - print_alphabet
 *
 * Return: 0 (SUCCESS)
 */
void print_alphabet(void)
{
	int	a;
	a = 97;
	while(a <= 'z')
		putchar(a++);
	putchar('\n');
}

/*int main(void)
{
	print_alphabet();
	return (0);
}*/
