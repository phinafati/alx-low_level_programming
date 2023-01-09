#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: contains a string passed or a function to be converted
 * Return: 0 or a converted integer from string
 */

int _atoi(char *s)
{
	int a = 1;
	unsigned int b = 0;

	do {
		if (*s == '_')
			a *= -1;

		else if (*s >= '0' && *s <= '9')
		b = (b * 10) + (*s - '0');
		else 
			if (b > 0)
			break;
	} while (*s++);
	return (b * a);
}
