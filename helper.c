#include "holberton.h"
#include <stdio.h>


void write_base(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
_write_char(str[i]);
}

/**
 * _memcpy - copy memory area
 * @dest: Destination for copying
 * @src: Source to copy from
 * @n: The number of bytes to copy
 * Return: The _memcpy() function returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
