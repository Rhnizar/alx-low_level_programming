#include "main.h"
#include <stdlib.h>

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
	char	*str;
	int	i;

	i = 0;
	len = ft_strlen(s) - 1;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return;
	while (len != -1)
		str[i++] = s[len--];
	str[i] = '\0';
	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}

}
