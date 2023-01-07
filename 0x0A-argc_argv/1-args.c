#include <stdio.h>

/**
 * main - Entery point
 * @argc: nomber of params
 * @argv: params vertor
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%s\n", (argc - 1));

	return (0);
}
