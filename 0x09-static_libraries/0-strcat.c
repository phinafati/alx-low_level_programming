#include "main.h"

/**
 **_strcat - cocatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	/*i -= 1;*/
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] =  src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
