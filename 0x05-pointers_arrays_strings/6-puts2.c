#include "main.h"

/**
 * _puts- prints every other character of a string, starting with the first character
 * @str: input string
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0' && i % 2 == 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
