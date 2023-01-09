#include "main.h"
 /**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: main string
  * @accept: string to locate
  * Return: pointer to the bytes 
  */

char *_strpbrk(char *s,  char *accept)
{
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}
	return ('\0');
}
