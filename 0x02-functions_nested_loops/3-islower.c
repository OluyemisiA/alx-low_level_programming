#include "main.h"

/**
 * _islower - checksif input is lowercase c
 * @c: single letter input
 * Return: 1 
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);

	}
	else
	{
		return (0);
	}
}
