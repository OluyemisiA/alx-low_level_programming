#include "main.h"

/**
 * _abs - computes the absolute value of the input
 * @n: n is an interger
 * Return: the input if it's an integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
