#include <stdio.h>

/**
 * main - The main prints the lowercase alphabet in reversed order,
 * followed by a new line.
 * Return: Always 0 (Success!)
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
