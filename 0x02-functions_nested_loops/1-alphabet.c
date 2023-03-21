#include <stdio.h>
#include "main.h"
/**
 * main - print_alphabet
 *
 * Return: 0 (SUCCESS)
 */

void print_alphabet(void)
{
	char	a = 'a';

	while (a <= 'z')
		putchar(a++);
	putchar('\n');
}

int main(void)
{
    print_alphabet();
    return (0);
}
