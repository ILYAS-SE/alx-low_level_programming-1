#include "main.h"

/**
 * strcmp : The strcmp function you provided appears to be a custom implementation or prototype for the strcmp function.
 * @s1 : are pointers to the null-terminated strings you want to compare.
 * @s2 : are pointers to the null-terminated strings you want to compare.
 * The function returns an integer value as described in the previous response.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
