#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints number from 0 to 9'
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
