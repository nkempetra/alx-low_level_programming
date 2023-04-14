#include "main.h"

/**
 * strtow - splits a string into words
 * @s: string that will be splitted
 * Return: pointer to the array of splitted words
 */

char **strtow(char *str)
{
	char **split;
	int i, j = 0, temp = 0, size = 0, words = count_words(str);

	if (words == 0)
		return (NULL);
	split = (char **) malloc(sizeof(char *) * (words + 1));
	if (split != NULL)
	{
		for (i = 0; i <= str_len(str) && words; i++)
		{
			if ((str[i] != ' ') && (str[i] != '\0'))
				size++;
			else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
			{
				split[j] = (char *) malloc(sizeof(char) * size + 1);
				if (split[j] != NULL)
				{
					while (temp < size)
					{
						split[j][temp] = str[(i - size) + temp];
						temp++;
					}
					split[j][temp] = '\0';
					size = temp = 0;
					j++;
				}
				else
				{
					while (j-- >= 0)
						free(split[j]);
					free(split);
					return (NULL);
				}
			}
		}
		split[words] = NULL;
		return (split);
	}
	else
		return (NULL);
}

/**
 * count_words - counts the number of words in a string
 * @s: string to be used
 *Return: number of words
 */

int count_words(char *s)
{
	int i = 0, words = 0;

	while (i <= str_len(s))
	{
		if ((s[i] != ' ') && (s[i] != '\0'))
		{
			i++;
		}
		else if (((s[i] == ' ') || (s[i] == '\0')) && i && (s[i - 1] != ' '))
		{
			words += 1;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (words);
}

/**
 * str_len - returns length of string
 * @s: string to be counted
 * Return: length of the string
 */

int str_len(char *s)
{
	int len = 0;

	if (s != NULL)
	{
		while (s[len])
			len++;
	}
	return (len);
}
