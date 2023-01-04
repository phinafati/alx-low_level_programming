#include "main.h"

/**
 * rot13 - encodes a string usinng rot13
 * @str: passed string
 * Return: a character point
 */

char *rot13(char *str);
{
	int i, j;

	char set1[] = "abcdefghijklmnopqrstuvwxyz";
	char set2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (set1[j] == str[i])
			{
				str[i] = set2[j];
				break;
			}
		}
	}
	return (str);
}
