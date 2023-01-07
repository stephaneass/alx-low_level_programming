#include <stdio.h>

/**
 * main - Entery point
 * @argc: nomber of params
 * @argv: params vertor
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);


	return (0);
}
