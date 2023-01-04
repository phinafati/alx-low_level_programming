#include "main.h"
/**
 * _memset - fill a block of memory
 * @s: starting address of memory
 * @b: the desired value
 * @n: member of bytes to be changed
 *
 * Return: Always value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int 1 = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
