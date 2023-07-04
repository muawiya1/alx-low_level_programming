#include "main.h"

/**
 * times_table - Entry point
 * Description: To print last all the times table to 9
 * author: Muawiya
 * date:04-07-2023
 * Return: 0 (success)
*/

void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			int c = a * b;

			if (c < 10)
			{
				if (b == 0)
				{
					_putchar(c);
				}
				if (b != 0)
				{
					_putchar(' ');
					_putchar('0' + c);
				}
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (c >= 10)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');

				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
