#include <stdio.h>

/**
 * main - entry point
 * Description: prints the largest prime factor of the number
 * Return: Always 0
 */

int main(void)
{
	long int num, pfac;

	num = 612852475143;
	for (pfac = 2; pfac <= num; pfac++)
	{
		if (num % pfac == 0)
		{
			num = num / pfac;
			pfac--;
		}
	}
	printf("%ld\n", pfac);
	return (0);
}
