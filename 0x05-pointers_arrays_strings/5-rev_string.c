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
 * rev_string - reverse string
 *@s: string
 */
void rev_string(char *s)
{
	int	len;

	len = ft_strlen(s) - 1;
	while (len != -1)
		putchar(s[len--]);
}
