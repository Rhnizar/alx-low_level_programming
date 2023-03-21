#include<stdio.h>

/*
 * main - print _putchar
 *
 * Return: 0 (SUCCESS)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/*int main(void)
{
	int r;

    r = _islower('H');
    putchar(r + '0');
    r = _islower('o');
    putchar(r + '0');
    r = _islower(108);
    putchar(r + '0');
    putchar('\n');
	return (0);
}*/
