#include "main.h"

/**
 * puts_half- prints half of a string, followed by a new line.
 * @str: input string
 * Return: void
 */

void puts_half(char *str)
{
	int count, i;

	while (*(str + 1))
	{
		count++;
	}
	i = count / 2;

	if (count % 2)
	{
		i += 1;
	}

	while (i < count)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
