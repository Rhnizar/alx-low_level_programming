#include<stdio.h>
/*
 * main - putchar
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int a;
	int A;

	a = 97;
	A = 65;
	while (a < 123)
		putchar(a++);
	while (A < 91)
		putchar(A++);
	putchar('\n');
	return (0);
}
