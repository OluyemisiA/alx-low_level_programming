#include "main.h"

/**
 * swap: swaps the values of two integers.
 * @a: input integer 1
 * @b: input integer 2
 *
 * Return: void
 */

void swap(int *a, int *b)
{
	int x = *a;
	*a = *b;	
	*b = x;
}	
