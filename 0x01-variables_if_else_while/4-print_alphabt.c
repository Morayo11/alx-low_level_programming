#include <stdio.h>
/**
 * main - main block
 * Description -Use putchar to printlowercase alphabet with the exception of q and e
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ( c != 'e' && c != 'q')
		{
			putchar(c);
		}

		c++;
	}	

	putchar('\n');

	return (0);
}
