#include "main.h"

/**
 * reverse_array - reverse array items
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: anything
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;
	
	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = temp;
	}
}
