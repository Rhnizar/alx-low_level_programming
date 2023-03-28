#include "main.h"

/**
 * ft_strlen - lenght string
 * @str: string
 * Return: lenght string
 */
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/**
 * puts_half - puts half
 *@str: string
 */
void puts_half(char *str)
{
	int	i;

	i = ft_strlen(str) / 2;
	while (str[i])
		putchar(str[i++]);
	putchar('\n');
}
