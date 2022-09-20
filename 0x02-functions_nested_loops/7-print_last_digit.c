#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: input number
 * Return: last digit of a number
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		i = -1 * (n % 10);
		_putchar(i + '0');
		return (i);
	}
	else
	{
		i = n % 10;
		_putchar(i + '0');
		return (i);
	}
}
