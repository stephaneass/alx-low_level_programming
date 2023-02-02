#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: the pointer to the string to comvert
 *
 * Return: the converted number, or 0
 */
void print_binary(unsigned long int n)
{
        if (n > 1)
        {
                print_binary(n >> 1);
        }
        _putchar((n & 1) + '0');
}
