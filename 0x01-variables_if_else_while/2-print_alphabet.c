#include <stdio.h>

/**
 * main - print alpa in lower case
 * Return: Always 0
 */
int main(void)

{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('/n');
	return (0);
}