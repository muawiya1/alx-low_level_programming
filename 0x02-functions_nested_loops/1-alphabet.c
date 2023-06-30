#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: C program to print_alphabet
 * author: Muawiya
 * date:23-06-2023
 * Return: 0 (success)
*/

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
