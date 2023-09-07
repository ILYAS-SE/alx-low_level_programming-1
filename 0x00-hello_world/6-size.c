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
printf("Size of a char: %ld byte(s)\n", sizeof(s));
printf("Size of an int: %ld byte(s)\n", sizeof(i));
printf("Size of a long int : %ld byte(s)\n", sizeof(k));
printf("Size of a long long int : %ld byte(s)\n", sizeof(j));
printf("Size of a float: %ld byte(s)\n", sizeof(x));
return (0);
}
