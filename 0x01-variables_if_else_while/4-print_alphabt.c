#include <stdio.h>
/**
 * main - main block
 * Description -Use `putchar` to printlowercase alphabet without of q e.
 * You can only use `putchar` up to two times.
 * You can only use `putchar` to print to the console.
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}	

	putchar('\n');

	return (0);
}
