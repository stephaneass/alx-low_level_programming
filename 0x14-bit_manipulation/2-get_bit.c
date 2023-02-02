#include "main.h"

/**
 * get_bit - enter
 * @n: the first number
 * @index: the second number
 * 
 * Return: the converted number, or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
        int bit;

	    bit = ((n >> index) & 1);
        if (index > 64)
                return (-1);
        return (bit);
}