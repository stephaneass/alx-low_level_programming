#include <stdio.h>

/**
 * main - Entry point
 * description: To show the size of each type
 * Return: always 0 means success
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of a long: %d byte(s)\n", sizeof(long));
	printf("Size of a double: %d byte(s)\n", sizeof(double));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
