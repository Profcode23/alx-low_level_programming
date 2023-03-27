#include "main.h"
#include "stdio.h"
/**
 * puts2 - prints every other character of a string, starting with the first character
 * @str: string character
 * Return: 0
 */
void puts2(char *str)
{
	int content;

	for (content = 0; string[content] != '\0'; content++)
		if (content %2 == 0)
			_putchar(str[content]);
	_putchar('\n');
}

