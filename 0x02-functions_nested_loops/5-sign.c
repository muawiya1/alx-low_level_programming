#include "main.h"

/**
 * print_sign - Entry point
 * Description: To check for lowercase.
 * @n: Parameter to check and validate
 * author: Muawiya
 * date:30-06-2023
 * Return: 0 (success)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
