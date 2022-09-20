#include "main.h"

/**
 * puts_half- prints half of a string, followed by a new line.
 * @str: input string
 * Return: void
 */

void puts_half(char *str)
{
	int count, i;

	while (str[count] != '\0')
	{
		count++;
	}

	if (count % 2 == 1)
		i = (count - 1) / 2;
	else
		i = count / 2;

	for (i++; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
