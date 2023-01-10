#include <stdio.h>
#include "main.h"

/**
 * main - print the name of program
 * @argc: counts arguments
 * @argv: Arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*lgnore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
