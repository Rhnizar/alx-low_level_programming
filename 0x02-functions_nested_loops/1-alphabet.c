#include <stdio.h>
#include "main.h"
/**
 * main - print_alphabet
 *
 * Return: 0 (SUCCESS)
 */
void print_alphabet(void)
{
	int	a;
	a = 97;
	while (a <= 'z')
		putchar(a++);
	putchar('\n');
}

