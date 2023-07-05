#include "main.h"

/**
 * print_times_table - Entry point
 * Description: Print times table
 * @n: Lenght of the table
 * author: Muawiya
 * date:05-07-2023
 * Return: 0 (success)
*/

void print_times_table(int n)
{
	int a, b;

	if (n < 0 || n > 15)
		return;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			int c = a * b;

			if (b == 0)
				_putchar('0' + c);
			if (c < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + c);
			} else if (c < 100)
			{
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			} else
			{
				_putchar('0' + (c / 100));
				_putchar('0' + ((c - 100) / 10));
				_putchar('0' + (c % 10));
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
