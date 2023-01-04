#include "main.h"

/**
 * more_numbers - draws a diagonal line on the terminal
 * @n: number of times to print \
 * Return: Always 0
 */

void more_numbers(void n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

