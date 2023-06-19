#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'get the last digit of a number'
 * Return: always 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("last digit of 98 is 8 and is greter than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("last digit of 980 is 0 and is 0\n", n, ld);
	}
	else
	{
		printf("last digit of -98 is -8 and less than 6 and not 0\n", n, ld);
	}
	return (0);
}
