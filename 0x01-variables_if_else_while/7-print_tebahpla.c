#include <stdio.h>

/**
 * main - entry point
 *Description: prints the lowercase alphabet in reverse
 *Return: 0
 */

int main(void)
{
	char lett;

	lett = 'z';

	while (lett >= 'a')
	{
		putchar(lett);
		lett--;
	}
	putchar('\n');
	return (0);
}
