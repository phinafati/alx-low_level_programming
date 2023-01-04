#include "main.h"
/**
 * _strspn - Entry point
 * @s:  input
 * @accept: input
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned innt n = 0;
	int r;

	while (*s)
	{
		for (r = o; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

