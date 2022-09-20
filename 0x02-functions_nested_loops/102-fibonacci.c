#include <stdio.h>

/**
 * main - main block
 * Description: Prints the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int count = 2;
	long int i = 1, j = 2, k;

	printf("%lu, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		k = j;
		j += i;
		i = k;
		count++;
	}

	return (0);
}
