#include <stdio.h>
/**
 * main - Entry point
 * author: Muawiya
 * date:23-06-2023
 * Return: 0 (success)
*/
int main(void)
{
	char ch = ('a', 'A');

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
