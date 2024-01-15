#include <stdio.h>

/**
 * rand - generates a sequence of numbers
 * Description: Mock implementation of rand() using predefined numbers
 *
 * Return: A number from a predefined sequence or resets after 6 calls
 */
int rand(void)
{
    static int calls = 0;
    int numbers[6] = {9, 8, 10, 24, 75, 9};

    if (calls < 5)
    {
        return (numbers[calls++]);
    }
    else if (calls == 5)
    {
        calls++;
        return (numbers[5]);
    }
    else
    {
        calls = 0;
        return (numbers[0]);
    }
}
