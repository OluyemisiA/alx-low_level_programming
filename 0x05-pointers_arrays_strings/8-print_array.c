#include "main.h"

/**
 * print_array- prints nelements of an array
 * @a: input array
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n)
	{
		printf("%d", *(a + 1));
		if (i != (n -1))
		{
			printf(", ");
		}
		i--;
	}
	printf("\n");
}
