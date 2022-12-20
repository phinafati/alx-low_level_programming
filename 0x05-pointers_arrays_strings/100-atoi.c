#include "main.h"

/**
 * _ayoi- convert string to an interger.
 * @s: pointer to a character string
 *
 * retur: void
 */
int _atoi(char *s)
{
	int sign;
	unsigned int num;
	char *temp;

	temp = s;
	num = 0;
	sign = 1;
	while (*temp != '\0')
	{
		do {
			num = num * 10 + (*tmp - '0');
			temp++;
		}while (*temp >= '0' && *temp <= '9');
	}
	return (num * sign);
}
				
