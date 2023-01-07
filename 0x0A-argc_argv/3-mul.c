#include <stdio.h>

/**
 * main - Entery point
 * @argc: nomber of params
 * @argv: params vertor
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}

	printf("%d\n", (argv[1] * argv[2]));

	return (0);
}
