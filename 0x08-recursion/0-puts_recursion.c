#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new putchar
 * @s: pointer block of memory to fill
 * Return: void
 */

void _puts_recursion(char *s)
{
	s = "lpa\0";
		if (*s == '\0')
		{
			_putchar('\n');
			return;
		}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
