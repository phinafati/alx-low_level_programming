#include "main.h"

/**
 * _isupper - checks if number is in uppercase
 * @c: an integer argument
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
