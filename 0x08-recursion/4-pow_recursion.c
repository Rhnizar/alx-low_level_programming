#include "main.h"

/**
 * _pow_recursion - pow rec
 * @x: int
 * @y: int
 * Return: pow
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y== 0)
		return (1);
	else
		return (x * ft_pow(x, y - 1));
}
