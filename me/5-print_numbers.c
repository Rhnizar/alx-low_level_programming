#include<stdio.h>
/*
 * main- print number
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int a;

	a = 0;
	while(a < 10)
		printf("%d", a++);
	printf("\n");
	return (0);
}
