#include <unistd.h>

/**
 * main - Entry point
 * Description: Print alphabets
 * author: Muawiya
 * date:30-06-2023
 * Return: 0 (success)
*/

int _putchar(char c)
{
	return write(1, &c, 1);
}
