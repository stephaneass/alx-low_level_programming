#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entery point
 * @argc: nomber of params
 * @argv: params vertor
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (agrc > 1)
	{
		for (i = 1; i < agrc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				sum += atoi(argc[i]);
			}
			else
			{
				printf("Error\n");

				return (1);
			}
		}
	}

	printf("%d\n", sum);

	return (0);
}
