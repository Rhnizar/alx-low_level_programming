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
 * puts2 - puts_2
 *@str: str
 */
void puts2(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len != -1)
	{
		putchar(str[i]);
		i += 2;
		len--;
	}
	putchar('\n');
}
