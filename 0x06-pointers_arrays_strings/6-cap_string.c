#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: passed string to capitalize
 * Return: a character pointer
 */

char *cap_string(char *str)
{
	int i, j;
	char delim[] = " \t\n,;.!?\"(){}"

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
				str[i] = str[i] - ('a' 'A');
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (delim[j] == str[i - 1])
					{
						str[i] = str[i] - ('a' - 'A');
					}
				}
			}
		}
		return (str);
	}
}
