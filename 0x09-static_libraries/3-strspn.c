#include "main.h"

/**
 * _strspn - gets the length of a perfix substring
 * @s: main string
 * @accept: prefix substring
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	i = 0;
	for (; *s; s++)
	{
		k = i;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				i += 1;
				break;
			}
		}
		if (i == k)
			break;
	}
	return (i);
}
