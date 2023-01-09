#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n; i++)
		dest[i] = src[i];
	return (dest);
}
