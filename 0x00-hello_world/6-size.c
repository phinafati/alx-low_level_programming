#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always success
 */

int main(void)
{
	printf("size of a char: %lu bytes(s)\n", sizeof(char));
	printf("size of a int: %lu bytes(s)\n", sizeof(int));
	printf("size of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("size of a float: %lu bytes(s)\n", sizeof(float));
	return (0);

}
