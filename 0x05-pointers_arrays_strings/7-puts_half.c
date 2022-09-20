#include "main.h"

/**
 * puts_half- prints half of a string, followed by a new line.
 * @str: input string
 * Return: void
 */

void puts_half(char *str)
{
	int i, mod  = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
			break;
		i++;
	}

	if (i % 2 == 1)
		mod = (i - 1) / 2;
	else
		mod = i / 2;

	for (mod++; mod < i; mod++)
		_putchar(str[mod]);
	_putchar('\n');
}
