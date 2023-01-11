#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a ewly allocated
 * space in memory which contains a copy of the string
 * passed.
 * @str: pointer to string being duplicated
 *
 * Return: NULL if str is NULL
 * pointer to dulpicated string on success
 * NULL if memory was insufficient
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	/* check is str is null */
	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	/*check if malloc was successful*/
	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
