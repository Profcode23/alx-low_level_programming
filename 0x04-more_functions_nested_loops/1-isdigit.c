#include "main.h"
/**
 * _isdigit - will check is c is a number or a letter
 * @c: item check
 * Return: 1 if c is a number else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
