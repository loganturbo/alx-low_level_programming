#include "main.h"
/**
 * _strchr - string character
 * @s: the string given
 * @c: another character
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s += b;
		return (s);
	}
	return ('\0');
}
