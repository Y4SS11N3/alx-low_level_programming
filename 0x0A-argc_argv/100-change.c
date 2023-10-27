#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum coins for change
 * @arg_c: Argument count
 * @arg_v: Argument values
 * Return: 0 - success
 */
int main(int arg_c, char *arg_v[])
{
	/* cents is the amount in cents, coin_count is the number of coins */
	int cents, coin_count = 0;

	if (arg_c != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(arg_v[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coin_count += 1;
	}
	printf("%d\n", coin_count);
	return (0);
}
