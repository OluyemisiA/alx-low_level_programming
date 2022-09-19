#include "main.h"

/**
 * _islower - checks for lowercase c and returns 1 if the letter passed is lowercase c
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
