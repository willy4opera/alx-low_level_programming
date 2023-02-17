#include <stdio.h>

/**
 * main - The main prints the alphabet in lowercase, 
 * and then in uppercase,
 * followed by a new line
 * Return: Always 0 and a (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
