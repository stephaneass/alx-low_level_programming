#include "main.h"

/**
 * search_sqrt - to search the sqrt
 * @n: the number
 * @i: the number to compare
 *
 * Return: the sqrt
 */
int search_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (search_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - the natural square root of a number
 * @n: the number
 *
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	return (search_sqrt(n, 1));
}
