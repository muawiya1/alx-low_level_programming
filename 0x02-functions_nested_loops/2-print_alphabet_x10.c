#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Decsription: Prints alphabet 10 times.
 * author: Muawiya
 * date:30-06-2023
 * Return: 0 (success)
*/

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	for (i = 0; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
