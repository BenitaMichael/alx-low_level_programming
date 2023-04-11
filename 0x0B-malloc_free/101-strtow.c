#include "main.h"
#include <stdlib.h>

/**
 * _free_grid - function that frees a 2 dimensional array
 * @grid: multidimensional array of char
 * @height: height of the array
 */
void _free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - function that splits a string into words
 * @str: string input
 * Return: pointer of an array of integers or NULL
 */
char **strtow(char *str)
{
	char **arout;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	arout = malloc((height + 1) * sizeof(char *));
	if (arout == NULL || height == 0)
	{
		free(arout);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				arout[i] = malloc((c - a1 + 2) * sizeof(char));
				if (arout[i] == NULL)
				{
					_free_grid(arout, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			arout[i][j] = str[a1];
		arout[i][j] = '\0';
	}
	arout[i] = NULL;
	return (arout);
}
