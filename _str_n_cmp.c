#include "shell.h"
/**
 * _str_n_cmp - called
 * @s1: string
 * @s2: string
 * n: int
 * Return: int
 */
int _str_n_cmp(const char *s1, const char *s2, size_t n)
{
	char c1, c2;

	while (n--)
	{
		c1 = *s1++;
		c2 = *s2++;
		if (c1 == '\0' || c1 != c2)
		{
			if (c1 > c2)
				return (1);
			else
			{
				if (c1 < c2)
					return (-1);
				else
					return (0);
			}
		}
	}
}
