#ifndef KEYGEN_H
#define KEYGEN_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_max_ascii_char(char *username, int length);
int multiply_chars_square_sum(char *username, int length);
int generate_random_char_based_on_first_char(char *username);
void generate_keygen(char *keygen, char **argv, int user_len, long *alph);

#endif
