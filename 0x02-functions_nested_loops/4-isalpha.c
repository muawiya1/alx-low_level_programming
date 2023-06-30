#include "main.h"

/**
 * _isalpha - Entry point
 * Description: To check for lowercase.
 * @c: Parameter to check and validate
 * author: Muawiya
 * date:23-06-2023
 * Return: 0 (success)
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
