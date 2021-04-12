#include "shell.h"

int exection(char **args)
{
        pid_t child_pid;
        int status;

        child_pid = fork();

        if (child_pid == 0)
        {
                if(execve(args[0], args, NULL) == -1)
                        exit(EXIT_FAILURE);
        }
        else
        {
                wait(&status);
        }
        return (0);
}
