#include "main.h"

/**
 * print_sign - function that prints the sign of a number..
 * @n: the input number to check
 * Return: 1 if number is greater than zero
 * 0 of number is zero
 * -1 if number is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_')
		return (-1);
	}
}
