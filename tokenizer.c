#include "shell.h"


char *strtok(char *comands, const char *delim)
{
        comands;
        delim = " /t/n/r";
        char *token;
        char *line = NULL;
        size_t i;

        if (line == NULL || comands == NULL) 
                return (NULL); 
        token = strtok(line, delim); 
        while (token != NULL) 
        { 
                comands[i] = strdup(token); 
                if (comands[i] == NULL) 
                { 
                        free(comands);
                        return (NULL);
                }
		comands[i] = token;
		return (comands);
	}
}


