#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Returns: 0 if success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
