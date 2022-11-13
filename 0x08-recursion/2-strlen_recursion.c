#include "main.h"

/**
 * _strlen_recursion - function to get length of a string
 * @s: string parameter
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	return (1 + _strlen_recursion(s));
}
