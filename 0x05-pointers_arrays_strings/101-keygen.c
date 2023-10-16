#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that generates random valid
 * passwords for a specific program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int password[100]; /** password: an array to hold the generated password */
	int idx; /** idx: index variable for loops */
	int total; /** total: holds the running total of the password values */
	int temp; /** temp: temporary variable for holding intermediate values */

	total = 0;

	srand(time(NULL));

	for (idx = 0; idx < 100; idx++)
	{
		password[idx] = rand() % 78;
		total += (password[idx] + '0');
		putchar(password[idx] + '0');
		if ((2772 - total) - '0' < 78)
		{
			temp = 2772 - total - '0';
			total += temp;
			putchar(temp + '0');
			break;
		}
	}

	return (0);
}
