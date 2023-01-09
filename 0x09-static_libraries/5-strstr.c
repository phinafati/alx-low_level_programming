#include "main.h"
#include <stdbool.h>

/**
 * _strstr - that locates a substring
 * @haystack: main string
 * @needle: the substring to find in main string
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	bool dec;

	dec = false;
	if (*needle == 0)
		return (haystack);
	for (; *haystack; haystack++)
	{
		if (*needle == *haystack)
		{
			for (i = 0; needle[i] != '\0'; i++)
			{
				if (*(haystack + i) == needle[i])
					dec = true;
				else
				{
					dec = false;
				}
			}
			if (dec == true)
				return (haystack);
		}
	}
	return ('\0');
}

