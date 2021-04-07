#include "shell.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - tokenizes a string
 * Return: 0
 */
int main(void)
{
        char str[] = "This better work bana";
        char *token ;
        token  = strtok(str, " ,\n\t\r;");
        char **tokens = malloc(sizeof(char) * strlen(str + 1));
        int pos = 0;

	while(token != NULL)
        {
                tokens[pos] = token;
                printf("tokens[%d] is : %s \n",pos, tokens[pos]);
                pos++;
                token = strtok(NULL, " ");
        }

	tokens[pos] = NULL;
	return (0);
}

