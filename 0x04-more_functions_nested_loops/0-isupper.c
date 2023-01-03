#include "main.h"

/**
 *_isupper - checks if parameter is an uppercase character.
 * @c: input character.
 * Return : Always (success) 
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
