#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: passed string
 * Return: a character poiter
 */

char *leet(char *str)
{
	int i, j;
	char set1[] = "aAeEoOtlL";
	char set2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (j <= 9)
		{
			if (set1[j] == str[i])
			{
				str[i] = set2[j];
			}
			j++;
		}
	}
	return (str);
}
