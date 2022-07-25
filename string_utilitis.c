#include "shell.h"
#include <stdio.h>

/**
 *_strcat - entry
 *@src: function string that appends to dest string
 *@dest: function that appends the src
 *Return: 0
 */
char *_strcat(chat *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - returns the length of a string.
 * @s: return length of string
 * Return:  strlen
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strcmp - entry point
 * @s1: function of string
 * @s2: function of string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, d = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			d = s1[i] - s2[i];
			break;
		}
		else
		{
			i++;
		}
		return (d);
	}
}

/**
 * _strcpy - entry
 * @dest: copies the string pointed to by src
 * @src: copies the string pointed
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 *_strncmp - string n compare
 * @s1: first string
 * @s2: second string
 * @n: bytes to compare
 * Return: 0 if string is indetical, less than 0 if s1 shorter than s2
 * greater than 0 if s1 is longer than s2
 */
int _strncmp(char *s1, char *s2, unsigned long n)
{
	unsigned long len;

	for (len = 0; s1[len] && s2[len] && len < n; len++)
	{
		if (s1[len] > s2[len])
			return (s1[len] - s2[len]);
		if (i == n)
			return (0);
		else
			return (-1);
	}
}

/**
 *_strdup - duplicated string
 *@str: string
 *Return: duplicated string
 */
char *_strdup(char *str)
{
	char *cp;
	int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		cp[i] = str[i];
	}
	return (cp);
}

