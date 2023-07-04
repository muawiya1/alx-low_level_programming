#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * Description: Print numbers up to 98
 * @n: Starting point of counting
 * author: Muawiya
 * date:04-07-2023
 * Return: 0 (success)
*/

void print_to_98(int n)
{
	int a;

	a = n;

	for (n = a; n <= 98; n++)
	{
		printf("%d, ", n);

	/*	if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
		}*/
	}

	for (n = a; n >= 98; n--)
	{
		printf("%d, ", n);

	/*	if (n > 98)
		{
			_putchar(',');
			_putchar(' ');
		}*/
	}
}
