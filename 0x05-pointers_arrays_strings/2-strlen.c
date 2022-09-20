#include "main.h"

/**
 * _strlen: Returns the length of a string
 * @s: input string
 * Return: length of string in bytes
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
