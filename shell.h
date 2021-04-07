#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

void prompt1(void);
void prompt2(void);
char *read_command(void);

#endif /* SHELL_H */
