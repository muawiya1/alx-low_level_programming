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
	char ch1 = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch1 = 'A'; ch1 <= 'Z'; ch1++)
		putchar(ch1);
	putchar('\n');
	return (0);
}
