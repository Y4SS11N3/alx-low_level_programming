#include "main.h"

/**
 * jack_bauer - Prints every minute of the day, from 00:00 to 23:59.
 *
 * Return: None
 */
void jack_bauer(void)
{
	int h_tens_dig, h_ones_dig, m_tens_dig, m_ones_dig; /* unique variable names for each digit of the time */

	for (h_tens_dig = '0'; h_tens_dig <= '2'; h_tens_dig++)
	{
		for (h_ones_dig = '0'; h_ones_dig <= '9'; h_ones_dig++)
		{
			if (h_tens_dig == '2' && h_ones_dig == '4')
				break;

			for (m_tens_dig = '0'; m_tens_dig <= '5'; m_tens_dig++)
			{
				for (m_ones_dig = '0'; m_ones_dig <= '9'; m_ones_dig++)
				{
					_putchar(h_tens_dig);
					_putchar(h_ones_dig);
					_putchar(':');
					_putchar(m_tens_dig);
					_putchar(m_ones_dig);
					_putchar('\n');
				}
			}
		}
	}
}

