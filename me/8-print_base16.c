#include<stdio.h>

/*
 * main- print base16
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int a;
	int b;

	a = 0;
	b = 97;
	while(a < 16)
	{
		if (a >= 10)
			putchar(b++);
		else
			putchar(a + 48);
		a++;
	}
	putchar('\n');
	return (0);
}
