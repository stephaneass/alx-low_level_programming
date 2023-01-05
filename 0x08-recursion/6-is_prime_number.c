#include "main.h"

/**
 * is_prime_number - check if prime number
 * @n: the number to check
 *
 * Return: 0 or 1 if prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (1);
	return (prime_number(n, 2));
}

/**
 * prime_number - check recursion prime number
 * @n: the number to check
 * @i: iteration number
 *
 * Return: 0 or 1 if is prime number
 */

int prime_number(int n, int i)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	return prime_number(n, i + 1);
}
