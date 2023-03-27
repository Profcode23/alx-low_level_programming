#include "main.h"
/**
 * puts_half - prints second half of a string, followed by a new line
 * @str: test string character
 * Return: 0
 */
void puts_half(char *str)
{
	int length_string, n;

	length_string = 0;

	while (str[length_string] != '\0')
		length_string++;

	if (length_string + 1 % 2 != '\0')
		n = (length_string - 1) / 2;
	else
		n = (length_string / 2);
	n++;
	for (length_string = n; str[length_string] != '\0'; length_string++)
		_putchar(str[length_string]);
	_putchar('\n');
}
