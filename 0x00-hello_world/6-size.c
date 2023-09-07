#include <stdio.h>
/**
 * main - A program that a prints the size of various computer types
 * Return: 0
 */
int main(void)
{
char s;
int i;
long int k;
long long int j;
float x;
printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(s));
printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int : %ld byte(s)\n", (unsigned long)sizeof(k));
printf("Size of a long long int : %ld byte(s)\n", (unsigned long)sizeof(j));
printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(x));
return (0);
}
