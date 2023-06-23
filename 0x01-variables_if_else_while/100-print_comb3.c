#include <stdio.h>
/**
 *  main - Entry point
 * Description: Print unique combinations of numbers
 * author: Muawiya
 * Return: 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
	       	for (b = 49; b <= 57; b++)
		{
			if ( a != b && b > a)
			{
				putchar(a);
				putchar(b);
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
