#include <stdio.h>

/**
 * main - Prints first 98 Fibonacci numbers.
 *
 * Return: 0 if the program executes successfully, otherwise no
 */
int main(void)
{
	unsigned long int counter;
	unsigned long int previousNumber = 1;
	unsigned long int currentNumber = 2;
	unsigned long int limit = 1000000000;
	unsigned long int prev_num1;
	unsigned long int prev_num2;
	unsigned long int curr_num1;
	unsigned long int curr_num2;

	printf("%lu", previousNumber);

	for (counter = 1; counter < 91; counter++)
	{
		printf(", %lu", currentNumber);
		currentNumber += previousNumber;
		previousNumber = currentNumber - previousNumber;
	}

	prev_num1 = previousNumber / limit;
	prev_num2 = previousNumber % limit;
	curr_num1 = currentNumber / limit;
	curr_num2 = currentNumber % limit;

	for (counter = 92; counter < 99; ++counter)
	{
		printf(", %lu", curr_num1 + (curr_num2 / limit));
		printf("%lu", curr_num2 % limit);
		curr_num1 += prev_num1;
		prev_num1 = curr_num1 - prev_num1;
		curr_num2 += prev_num2;
		prev_num2 = curr_num2 - prev_num2;
	}
	printf("\n");
	return (0);
}
