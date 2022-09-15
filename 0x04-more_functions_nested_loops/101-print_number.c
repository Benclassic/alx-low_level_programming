#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: integer to be printed.
 */

void print_number(int n)
{
	unsigned in num = 0;

	if (n < 0)
	{
		_putchar('_');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
