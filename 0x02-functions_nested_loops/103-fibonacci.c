#include <stdio.h>

/**
 * main - main function
 * Description: Prints the sum of even fibonaci number up to
 *  4,000,000
 *  Return: 0
 */

int main(void)
{
	int i = 1, j = 2, sum = 0, k = 0;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			sum += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", sum);
	return (0);
}
