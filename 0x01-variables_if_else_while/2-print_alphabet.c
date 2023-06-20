#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints the alphabet'
 * Return: always 0
 */
int main(void)
{
	char alp[26] = "abcdefjhijklmnopqrstuvwxy";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
