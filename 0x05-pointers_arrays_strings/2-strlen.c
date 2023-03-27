#include "main.h"

/**
 * _strlen - lenght string
 * @s: string
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
