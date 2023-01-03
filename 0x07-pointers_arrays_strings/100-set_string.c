#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: source data
 * @to: destination data
 *
 * Return: anything
 */
void set_string(char **s, char *to)
{
	/*while (**s)*/
	/*{*/

	/*}*/

	for (i = 0; **s != '\0'; i++)
	{
		*to[i] = **s;
	}
}
