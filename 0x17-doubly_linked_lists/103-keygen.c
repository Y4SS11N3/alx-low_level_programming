#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * find_max_ascii_char - Finds the character with the maximum ASCII value
 * @username: The username string
 * @length: The length of the username
 * Return: A random number seeded by the maximum ASCII value character
 */
int find_max_ascii_char(char *username, int length)
{
	int max_char;
	int current_index;
	unsigned int rand_num;

	max_char = *username;
	current_index = 0;

	while (current_index < length)
	{
		if (max_char < username[current_index])
			max_char = username[current_index];
		current_index += 1;
	}

	srand(max_char ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * multiply_chars_square_sum - SumsTheSquares of each character in the username
 * @username: The username string
 * @length: The length of the username
 * Return: Sum of the squares of each character
 */
int multiply_chars_square_sum(char *username, int length)
{
	int sum;
	int current_index;

	sum = current_index = 0;

	while (current_index < length)
	{
		sum += username[current_index] * username[current_index];
		current_index += 1;
	}

	return (((unsigned int)sum ^ 239) & 63);
}

/**
 * generate_random_char_based_on_first_char - Generates a random character
 * based on the first character of the username
 * @username: The username string
 * Return: A random character
 */
int generate_random_char_based_on_first_char(char *username)
{
	int rand_char;
	int current_index;

	rand_char = current_index = 0;

	while (current_index < *username)
	{
		rand_char = rand();
		current_index += 1;
	}

	return (((unsigned int)rand_char ^ 229) & 63);
}

/**
 * generate_keygen - Generates a keygen based on the username and prints it
 * @keygen: The keygen string to be generated
 * @argv: Vector of command-line arguments
 * @user_len: The length of the username
 * @alph: The array used for alphabet transformation
 */
void generate_keygen(char *keygen, char **argv, int user_len, long *alph)
{
	int current_char;
	int sum_square;
	int first_char_rand;

	sum_square = multiply_chars_square_sum(argv[1], user_len);
	keygen[4] = ((char *)alph)[sum_square];

	first_char_rand = generate_random_char_based_on_first_char(argv[1]);
	keygen[5] = ((char *)alph)[first_char_rand];

	keygen[6] = '\0';

	/* Print the generated key */
	for (current_char = 0; keygen[current_char]; current_char++)
		printf("%c", keygen[current_char]);
}

/**
 * main - Entry point for the key generator program
 *
 * @argc: Count of command-line arguments
 * @argv: Vector of command-line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int user_len;
	int char_sum;
	int current_char;
	int max_char_idx;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };

	(void) argc;

	/* Calculate the length of the username */
	for (user_len = 0; argv[1][user_len]; user_len++)
		;

	/* Calculate keygen based on different character properties */
	keygen[0] = ((char *)alph)[(user_len ^ 59) & 63];
	char_sum = current_char = 0;
	while (current_char < user_len)
	{
		char_sum += argv[1][current_char];
		current_char += 1;
	}
	keygen[1] = ((char *)alph)[(char_sum ^ 79) & 63];
	char_sum = 1;
	current_char = 0;
	while (current_char < user_len)
	{
		char_sum *= argv[1][current_char];
		current_char += 1;
	}
	keygen[2] = ((char *)alph)[(char_sum ^ 85) & 63];
	max_char_idx = find_max_ascii_char(argv[1], user_len);
	keygen[3] = ((char *)alph)[max_char_idx];

	generate_keygen(keygen, argv, user_len, alph);

	return (0);
}
