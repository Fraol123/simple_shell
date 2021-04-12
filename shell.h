#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

extern char **environ;

void prompt1(void);
void prompt2(void);
char *read_command(void);
char **tokenizer(char *command);
char **reallocate(char **pointer, size_t *size);
int print_env(void);

#endif /* SHELL_H */
