#include "shell.h"

/**
* _strcmp - compares two strings
* @s1: string to be compared to s2
* @s2: string to be compared to s1
*
* Return: the difference between s1 and s2
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, output;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0')
		i++;

	output = (*(s1 + i) - *(s2 + i));

	return (output);
}
