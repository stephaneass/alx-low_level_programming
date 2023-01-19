#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the separator
 * @n: number of args
 *
 * Return: anything
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n <= 0)
		return;
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(list, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
