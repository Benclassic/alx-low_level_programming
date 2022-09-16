#include "main.h"
/**
<<<<<<< HEAD
 * print_most_numbers - prints
=======
 * print_most_numbers - a function that prints numbers from 0-9
>>>>>>> 2c6dca8c1691293c85216a6c5d730675d69ecb47
 *
 * Return: 0-9, excluding 2 and 4, following by new line
 */
void print_most_numbers(void)
{
<<<<<<< HEAD
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
=======
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		else
			_putchar(i + '0');
>>>>>>> 2c6dca8c1691293c85216a6c5d730675d69ecb47
	}
	_putchar('\n');
}
