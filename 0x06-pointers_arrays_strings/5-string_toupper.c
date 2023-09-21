#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */

char *string_toupper(char *str)
{
	while (*str++)
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
	return (str);
}
