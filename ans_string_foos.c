#include "shell.h"

/**
 * _strcat - ncatenates two strings
 *
 * @dest: Destination string
 *
 * @src: Origin string
 * Return: Always 0
 */



char *_strcat(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;

	}
	dest[a] = '\0';
return (dest);
}



/**
 * _strcmp - Compares two strings
 *
 * @s1: a string
 * @s2: Another string
 *
 * Return: multiple returns
 *
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int val;

	while (s1[a] != 0 && s2[a] != 0 && s1[a] == s2[a])
		a++;
val = s1[a] - s2[a];
return (val);

}

/**
 * _strlen - gets the size of a string
 * @s: the string to measure
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
		;

	return (a);
}

/**
 *_strncmp -  function that compares two strings.
 *@s1: string one
 *@s2: string two
 *@n: number of characters
 * Return: diference
 */

size_t _strncmp(char *s1, char *s2, size_t n)
{
	size_t a, b;

	for (b = 0; s1[b] != '\0' && b < n; b++)
	{
		i = s1[b] - s2[b];

		if (a != 0)
		{
			return (a);
		}
	}
	return (0);
}

/**
 * _strcpy - copies the string pointed to by src into dest
 * @dest: destination of the copy
 * @src: source of the copy
 *
 * Return: char pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a + 1] = 0;
	return (dest);
}
