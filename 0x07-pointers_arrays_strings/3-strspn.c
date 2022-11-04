#include "main.h"
/**
 * _strspn - gets the length of a profile substring
 * @s: the string we look at
 * @accept: the string we compare to
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b = 0;

	for (; s[a]; a++)
	{
		for  (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}
		}
			if (s[a] != accept[b])
			break;
	}
	return (a);
}
