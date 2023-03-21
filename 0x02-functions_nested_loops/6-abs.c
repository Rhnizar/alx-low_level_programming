#include<stdio.h>

/*
 * main - print _putchar
 *
 * Return: 0 (SUCCESS)
 */
int _abs(int r)
{
	if (r < 0)
		return (r * -1);
	return (r);
}

/*int main(void)
{
 int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
	return (0);
}*/
