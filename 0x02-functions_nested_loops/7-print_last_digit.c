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
	if (n < 0)
	{
		return (_abs(n % 10));
	}
	else
	{
		return (n % 10);
	}
}
