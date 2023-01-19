#include "variadic_functions.h"
#include <varargs.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: the first arg
 *
 * Return: the sum result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int i, sum;

	sum = 0;
	va_start(list);
	for (i = n, i != NULL; i = va_arg(list, int))
		sum += i;

	va_end(list);
	putchar('\n');
	return (sum);
}
