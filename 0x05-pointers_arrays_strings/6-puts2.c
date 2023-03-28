#include "main.h"

/**
 * puts2 - puts_2
 *@str: str
 */
void puts2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		putchar(str[i])
		i += 2;
	}
	putchar('\n');
}
