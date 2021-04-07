#include "shell.h"

/**
* prompt1 - prints $ to let user know the program is ready to take their input
* Return: no return
*/
void prompt1(void)
{
	fprintf(stderr, "$ ");
}

/**
* prompt2 - prints when user enters a multi-line command
* Return: no return
*/
void prompt2(void)
{
	fprintf(stderr, "> ");
}
