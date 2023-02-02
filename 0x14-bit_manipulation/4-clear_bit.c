#include "main.h"

/**
 * set_bit - enter
 * @n: the first number
 * @index: the second number
 * 
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
        if (index > 64)
                return (-1);

        if ((*n >> index) & 1)
        {
                *n -= 1 << index;
                return (1);
        }
        return (1);
}