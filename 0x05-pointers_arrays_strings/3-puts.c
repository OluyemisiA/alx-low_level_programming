#include "main.h"

/**
 * _puts: prints s string to the stdout.
 * @str: input string
 * Return: void
 */

void _puts(char *s)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
