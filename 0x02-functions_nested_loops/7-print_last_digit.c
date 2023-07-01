#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: To print last digit of a numbers
 * @n: Parameter to check and validate
 * author: Muawiya
 * date:01-07-2023
 * Return: 0 (success)
*/

int print_last_digit(int n)
{
	int a = n % 10;
	int b = _abs(a);

	if (n < 0)
	{
		return (b);
	}
	else
	{
		return (a);
	}
}
