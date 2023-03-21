#include<stdio.h>

/*
 * main - print alphabt
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int a;

	a = 97;
	while (a < 123)
	{
		if (a == 101 || a == 113)
			a++;
		putchar(a++);
	}
	putchar('\n');
	return (0);
}
