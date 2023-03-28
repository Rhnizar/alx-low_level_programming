#include "main.h"

/**
 * _atoi - array to integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int i;
	unsigned int res;
	int is;
	int signe;

	i = 0;
	res = 0;
	is = 0;
	signe = 1;
	while (s[i])
	{
		if (s[i] == '-')
			signe *= -1;
		while (s[i] >= '0' && s[i] <= '9')
		{
			is = 1;
			res *= 10;
			res += s[i] - 48;
			i++;
		}
		if (is == 1)
			break;
		i++;
	}
	return (res * signe);
}
