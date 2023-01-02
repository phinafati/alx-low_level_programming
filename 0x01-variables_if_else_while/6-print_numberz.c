#include <stdio.h>

/**
 * main - entry point
 * Description: prints all single digit numbers of base 10 starting  from 0
 * Return: 0
 */

int main(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		putchar(num % 10 + '0');
		num++;
	}
	putchar('\n');
	return (0);
}

