#ifndef SHELL_H
#define SHELL_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>

/* environment variables */
extern char **environ;

/* handle built ins */
int checker(char **cmd, char *buf);
void prompt_user(void);
void handle_signal(int m);
char *read_command(void);
char **tokenizer(char *line);
char *test_path(char **path, char *command);
char *append_path(char *path, char *command);
int handle_builtin(char **command, char *line);
void exit_cmd(char **command, char *line);

char **reallocate(char **pointer, size_t *size);
void print_env(void);
int _strcmp(char *s1, char *s2);
int _putchar(char c);
int print_s(char *s);
char *_strcat(char *dest, char *src);
char *_strstr(char *haystack, char *needle);
void execution(char *cp, char **cmd);
int search(char **args);
int search_dirs(char **command, char **args);
char *find_path(void)
int interpreter(char **args);

/* helper function for efficient free */
void free_buffers(char **buf);


#endif /* SHELL_H */
