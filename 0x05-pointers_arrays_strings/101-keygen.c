#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Produces a keygen.
 * Return: Always 0.
 */
int main(void)
{
	int rdm_num = 0, cmlt_sum = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (cmlt_sum < 2772)
	{
		rdm_num = rand() % 128;
		if ((cmlt_sum + rdm_num) > 2772)
			break;
		cmlt_sum = cmlt_sum + rdm_num;
		printf("%c", rdm_num);
	}
	printf("%c\n", (2772 - cmlt_sum));
	return (0);
}
