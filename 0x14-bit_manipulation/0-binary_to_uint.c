#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: the pointer to the string to comvert
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
        unsigned int num, i;

        if (!b || !*b)
                return (0);
        num = i = 0;
        while (b[i])
	    {
		        if (b[i] > 49)
			            return (0);
		        else if (b[i] == 49)
		        {
                    num <<= 1;
                    num += 1;
                }
                else
                    num <<= 1;
                i++;
        }
        return (num);
}