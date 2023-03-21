#include<stdio.h>
/*
 * main - print numberz
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	a = 0;
	while(a < 10)
	{
		putchar(a + 48);
		a++;
	}
	putchar('\n');
	return (0);
}
