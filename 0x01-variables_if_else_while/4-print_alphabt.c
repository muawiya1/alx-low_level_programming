#include <stdio.h>
/**
 * main - Entry point
 * author: Muawiya
 * date:23-06-2023
 * Return: 0 (success)
*/
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	putchar('\n');
	return (0);
}
