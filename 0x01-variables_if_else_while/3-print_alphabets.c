#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in lower case
 * and the in upperccase, follow by a new line
 * Return: o
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
