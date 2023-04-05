#include "main.h"

/**
 * sqrtt - sqrt
 *@x: number
 */
int     sqrtt(int x)
{
        int i = 0;
        while (i < x)
        {
                if (i * i == x)
                return (i);
                i++;
        }
        return (0);
}
/**
 * _sqrt_recursion - sqrt
 * @n: number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
                return -1;
        else if (n == 0)
                return 1;
        else
                return (sqrtt(n));
}
