#include "shell.h"

/**
* _strstr - locates a substring
* @haystack: string to be checked
* @needle: to be located in haystack
*
* Return: pointer to beginning of needle or NULL
* if needle not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *needle)
		{
			char *ptr = _strstr(haystack + i + 1, needle + 1);

			return ((ptr) ? ptr - 1 : NULL);
		}
	}
	return (NULL);
}

/**
* _strcat - concatenates two strings
* @dest: to be concatenated to
* @src: to be concatenated to dest
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
		j++;
	}

	i = 0;
	while (*(src + i) != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
