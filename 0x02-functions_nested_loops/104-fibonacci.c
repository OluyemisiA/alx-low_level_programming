#include <stdio.h>
#define largest 10000000000

/**
 * main - main function
 * Description: Find andFind and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated
 * Return: 0
 */

int main(void)
{
	unsigned long int first = 0, b = 1, first1 = 0, b2 = 2;
	unsigned long int h1, h2, h3;
	int count;

	printf("%lu, %lu, ", b, b2);
	for (count = 2; count < 98; count++)
	{
		if (b + b2 > largest || first1 > 0 || first > 0)
		{
			h1 = (b + b2) / largest;
			h2 = (b + b2) % largest;
			h3 = first + first1 + h1;
			first = first1, first1 = h3;
			b = b2, b2 = h2;
			printf("%lu%010lu", first1, b2);
		}
		else
		{
			h2 = b + b2;
			b = b2, b2 = h2;
			printf("%lu", b2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
