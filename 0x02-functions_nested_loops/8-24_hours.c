#include "main.h"

/**
 * jack_bauer - Entry point
 * Description: To print last all the times in 24hrs
 * author: Muawiya
 * date:04-07-2023
 * Return: 0 (success)
*/

void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
	}
}
