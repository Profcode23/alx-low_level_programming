#include "main.h"
/**
 * _isupper - checks whether letter is a lower or uppercase
 * @c: the letter sample
 * Return: 1 if uppercase, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
