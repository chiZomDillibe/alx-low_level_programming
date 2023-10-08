#include<stdio.h>

/**
 * main-prints all possible combinations of single-digit numbers
 * Return:Alwasy 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n != 9)
			putchar(n + '0');
		else
		{
			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
