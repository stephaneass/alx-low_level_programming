#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description: The last digit
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of n is %d and is greater than 5");
	else if (n == 0)
		printf("Last digit of n is %d and is 0");
	else (n < 6 && n != 0)
		printf("Last digit of n is %d and is less than 6 and not 0");
	return (0);
}
