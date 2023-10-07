#include<stdio.h>

/**
 * main-prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Alwasy 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'Z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
