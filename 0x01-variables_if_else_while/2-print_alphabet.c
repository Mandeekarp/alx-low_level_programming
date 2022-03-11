#include <stdio.h>
#include <unistd.h>

/**
 * main - program that prints the alphabet in lowercase
 * Description: prints the alphabet in lowercase\n
 * Return 0
 */
 
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}