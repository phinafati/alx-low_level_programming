#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: passed string to capitalize
 * Return: a character pointer
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[++inde])
	{
		while (!(str[[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (str[index - 1] == ' ' ||
				srt[index - 1] == '\t' ||
				srt[index - 1] == '\n' ||
				srt[index - 1] == ',' ||
				srt[index - 1] == ';' ||
				srt[index - 1] == '.' ||
				srt[index - 1] == '.' ||
				srt[index - 1] == '?' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}')
			str[index] -= 32;
	}
	return (str);
}
