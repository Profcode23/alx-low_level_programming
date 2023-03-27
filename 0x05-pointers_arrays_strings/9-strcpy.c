#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int content;

	for (content = 0; src[content] != '\0'; content++)
		dest[content] = src[content];
	dest[content] = '\0';
	return (dest);
}
