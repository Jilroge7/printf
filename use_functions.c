#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
* _strlen - function
* @s: first operand & pointer
*
* Description: function that returns the length of a string
* Return: Always 0
*/
int _strlen(char *s)
{
	int index = 0;

	while (*s != '\0')
	{
		index++;
		s++;
	}
	return (index);
/**
*_puts - function
* @str: first operand and pointer
*
* Description: prints a string, followed by a new line to stdout
* Return: string
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
/**
* _strcpy - function
* @src: copy from
* @dest: copy to
*
* Description: copies strng pnted by src to dest with null
* Return: char
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
* _atoi - function
* @str: string to iterate and replace with int
*
* Description: function to convert char into int string
* Return: 0
*/
int _atoi(char *str)
{ 
	int res = 0; // Initialize result 
  
	// Iterate through all characters of input string and 
	// update result 
	for (int i = 0; str[i] != '\0'; ++i) 
	res = res * 10 + str[i] - '0'; 
  
// return result. 
	return res; 
}
