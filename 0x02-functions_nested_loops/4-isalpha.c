#include "main.h"

/**
 * _isalpha - checks if the input is an alphabet
 * @c: single letter input
 * Return: 1 (if it is)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
