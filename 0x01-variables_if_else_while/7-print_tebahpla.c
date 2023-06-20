#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print alphabet in lower case and reverse'
 * Return: always 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
