#include <stdio.h>


/**
 * main - entry point
 * Description:rints all the numbers of base 16 in lowercase
 * Return: Always  0
 */

int main(void)
{
	int num;
	char lett;

	num = 0;
	lett = 'a';

	while (num <= 9)
	{
		putchar(num % 10 + '0');
		num++;
	}
	while (lett <= 'f')
	{
		putchar(lett);
		lett++;
	}
	putchar('\n');
	return (0);
}
