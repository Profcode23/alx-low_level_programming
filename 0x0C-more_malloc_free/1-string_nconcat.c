#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int content1;
	unsigned int content2;
	unsigned int length_s1 = 0;
	unsigned int new_length;
	char *pointer;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (content1 = 0; s1[content1]; content1++)
		length_s1++;

	new_length = length_s1 + n;

	pointer = malloc(sizeof(char) * (new_length + 1));
	if (pointer == NULL) 
		return (NULL);

	for (content1 = 0; content1 < length_s1; content1++)
	{
		pointer[content1] = s1[content1];
	}

	for (content2 = 0; content2 < n; content2++, content1++)
	{
		pointer[content1] = s2[content2];
	}

	pointer[content1] = '\0';

	return (pointer);
}
