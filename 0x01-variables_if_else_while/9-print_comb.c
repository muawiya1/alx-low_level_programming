#include <stdio.h>
/**
 * main - Entry point
 * author: Muawiya
 * date:24-06-2023
 * Return: 0 (success)
*/
int main(void)
{
	int a = 48;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
