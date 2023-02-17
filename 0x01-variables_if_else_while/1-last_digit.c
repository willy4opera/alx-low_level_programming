#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The main prints the last digit of the random
 * number stored in the variable num
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	srand(time(0));
	num = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", num, num % 10);
	if (num % 10 > 5)
		printf("and is greater than 5\n");
	else if (num % 10 == 0)
		printf("and is 0\n");
	else if (num % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
