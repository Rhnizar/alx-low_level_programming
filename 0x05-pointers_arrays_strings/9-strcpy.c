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
 * _strcpy - copy string
 * @dest: pointer dest
 * @src: pointer src
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = ft_strlen(src);
	i = 0;
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
