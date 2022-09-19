#include "main.h"

/**print_alphabet_x10 - prints the alphabet ten times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int cycle = 0;
	char letter;

	while (cycle < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		cycle++;
	}
	
}
