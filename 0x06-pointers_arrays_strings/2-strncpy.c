#include "main.h"

/**
 * strncp : is a C library function used for copying a specified number of characters from one string to another. It stands for "string copy with a specified maximum number of characters"
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
        int i;

        for (i = 0; i < n && src[i] != '\0'; i++)
                *(dest + i) = *(src + i);
        for ( ; i < n; i++)
                *(dest + i) = '\0';
        return (dest);
}
