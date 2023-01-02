#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first argument
 * @s2: second argument
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; *s1 == *s2; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
