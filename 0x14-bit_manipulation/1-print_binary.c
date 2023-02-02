#include "main.h"

/**
 * print_binary - converts binary to unsigned int
 * @n: the number
 *
 * Return: anything
 */
void print_binary(unsigned long int n)
{
        if (n > 1)
        {
                print_binary(n >> 1);
        }
        _putchar((n & 1) + '0');
}
