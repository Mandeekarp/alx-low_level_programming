#include <stdio.h>
#include <unistd.h>
/**
 * main 
 * Description: prints numbers using putchar
 * Return 0)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}