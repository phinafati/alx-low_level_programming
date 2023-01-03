#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('_');
		n = n * -1;
	}
	num = n;
	if (num / 10)
		print_number(num / 10);
	_putchar(num % 10 + '0');
}
