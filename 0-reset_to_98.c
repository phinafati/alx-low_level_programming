#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the value two integers
 *using two input parameters
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Rrturn: Nothing
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
