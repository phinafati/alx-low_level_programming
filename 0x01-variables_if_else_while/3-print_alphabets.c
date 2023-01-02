#include <stdio.h>

/**
 * main - main block
 * Description: print the alphabet in lower case
 * and the in upperccase, follow by a new line
 * Return: Always 0
 */

int main(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
		putchar(lett);
	for (lett = 'A'; lett <= 'Z'; lett++)
		putchar(lett);
	putchar('\n');
	return (0);
}
