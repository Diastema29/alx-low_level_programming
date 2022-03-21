#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: A pointer to a that would be updated
 * @b: A pointer to b that would be updated
 * Return: void if answer is correct
 */

void swap_int(int *a, int *b);
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
