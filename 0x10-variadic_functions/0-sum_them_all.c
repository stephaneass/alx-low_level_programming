#include "variadic_functions.h"
#include <varargs.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: the first arg
 *
 * Return: the sum result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum;

	if (n <= 0)
		return 0;
	sum = 0;
	va_start(list);
	for (i = 0, i < n; i++)
		sum += va_arg(list, int);

	va_end(list);
	putchar('\n');
	return (sum);
}
