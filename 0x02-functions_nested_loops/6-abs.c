#include "main.h"

/**
 * _abs - computes the absolute value of the input
 * Return: the input if it's an integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
