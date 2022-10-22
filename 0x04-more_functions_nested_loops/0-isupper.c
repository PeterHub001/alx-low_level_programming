#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c: variable text
 * Return: Always 0
 */
int _isupper(int c)
{
	int i;

	if (c >= 'a' && c <= 'z')
	{
		i = 0;
	}
	if (c >= 'A' && c <= 'Z')
	{
		i = 1;
	}
		return (i);
}
