#include "shell.h"


char *find_path(char *name)
{
        int x;
        for (x = 0; environ[x] != NULL; x++)
        {
                if (strcmp(environ[x], name) == 0)
			break;
                else if (environ[x + 1] == NULL)
                        perror("find path");
        }
        return (environ[x]);
}
