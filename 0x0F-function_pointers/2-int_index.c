#include "main.h"
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: number of element in array
 * @cmp: pointer to function used to compare values
 *
 * Return: index of first element
 * -1 if no element is found <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, rest;

	rest = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (rest);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				rest = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (rest);
			}
		}
	}
	return (rest);
}
