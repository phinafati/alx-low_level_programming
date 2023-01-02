#include <stdio.h>

/**
 * main - entry point
 * Description: printing all alphabetic letters except e and q
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar ('\n');
	return (0);
}
