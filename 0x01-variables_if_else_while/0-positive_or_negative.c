/*
 * File - 0-postive_or_negative.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - assign a random number to the variable n each time it is executed
 * prints whether stored number is +ive or -ive
 * Return 0
 */
 
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	return (0);
}