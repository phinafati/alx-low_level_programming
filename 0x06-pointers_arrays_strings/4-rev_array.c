#include  "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: passed array argument
 * @n: size of an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, swp;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		swp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = swp;
	}
}
