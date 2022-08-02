#include "shell.h"
#include <stdio.h>

/**
 *_strcat - entry
 *@src: function string that appends to dest string
 *@dest: function that appends the src
 *Return: 0
 */
char *_strcat(char *dest, char *src)
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
	return (0);
}

/**
 * _strcpy - entry
 * @dest: copies the string pointed to by src
 * @src: copies the string pointed
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
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
	cp = malloc(sizeof(char) * (len + 1));
	for (i = 0; i < len; i++)
	{
		cp[i] = str[i];
	}
	return (cp);
}

