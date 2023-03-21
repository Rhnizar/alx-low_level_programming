#include<stdio.h>

/*
 * main- print tebahpla 
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int a;

	a = 122;
	while(a > 96)
		putchar(a--);
	putchar('\n');
	return (0);
}
