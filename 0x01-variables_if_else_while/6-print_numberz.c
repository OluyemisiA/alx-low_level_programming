#include <stdio.h>

/**
 * main - prints all single digit number of base 10 starting from 0,
 * followed by a new line
 * Return: 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
