#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Takes in a string and duplicates it
 *
 * @str: string to duplicate
 * Return: pointer to char.
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (; str[i] != '\0'; i++)
		;

	ptr = (char *)malloc((i + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (; j < i; j++)
		*(ptr + j) = str[j];

	return (ptr);
	free(ptr);
}
