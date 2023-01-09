#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the constant
 * @b: is a contant
 * @n: bytes of the memory
 * Return: pointer to the memory areas
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
