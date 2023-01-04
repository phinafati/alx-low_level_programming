<<<<<<< HEAD
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: set a random number and print the number
 * and if it is possitive, negative, or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
=======
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */


int main(void)
{
	int;

	srand(time(0));
	n = rand() - RAND MAX / 2;
	           
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);

	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
>>>>>>> 0ac90f26e980c1e0a4584d442f16b644dbbd61b9
	return (0);
}
