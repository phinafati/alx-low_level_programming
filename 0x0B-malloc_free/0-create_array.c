#include "main.h"
#include <stdlib.h>
/**
 * create_array - print a string
 * @size: number element array
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}
	/*define value with malloc*/
	buffer = (char *) malloc(size * sizeof(c));
	if (buffer == 0)
	{
		return (NULL);
	}
		else
	{
		position = 0;
		while (position < size) /*while for array*/
		{
			*(buffer + position) = c;
			position++;
		}
		return (buffer);
	}
}
