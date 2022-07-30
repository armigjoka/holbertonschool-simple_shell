#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the arguments
 * @ac: numb of arguments
 * @av: arrays of string
 * Return: 0
 */
int main(int ac, char av)
{
	int l;

	for (l = 0; av[l]; l++)
	{
		printf("%s", av[l]);
	}
	printf("\n");
	return (0);
}
