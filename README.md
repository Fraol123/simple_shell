# Simple Shell
### Synopsis
The simple shell project is a collaborative project to explore and understand the functionality and implementation of the shell command languag>

### Environment
Our shell was built and tested in the Ubuntu 14.04 LTS.
### Repository Contents
Our shell includes the following files:

|  **File**  |   **Description**   |
| ------------ | --------------------- |
| print_env.c | Contains the print_env function |
| execution.c | Contains the execution function |
| shell.h | Contains C standard library header files, and struct and function declarations |
|tokenizer.c| tokenizes the strings|
|path.c| contains the find_path function|
|promt_user.c| contains prompt1 and prompt2 function|
|read_command.c| contains read_command function|
|reallocate.c| contains the reallocate function|
|nano main.c| contains the main function|


### Description of Functions

| **Function** | **Description** |
| ---------------|---------------|
|void prompt1(void)| prints the first line promt|
|void prompt2(void)| prints the second line promt|
|char *read_command(void)| reads the command entered from user|
|char **tokenizer(char *command)| tokenizes the string |
|char **reallocate(char **pointer, size_t *size)| it's the same as realloc command|
|char *find_path(char *name)|Locates the PATH variable in the environment. Returns a string containing the PATH|
|int print_env(void)| prints the enciroment|
|int exection(char **args)|Creates a child process and executes a new program within it. Returns an integer value indicating success or failure|

### How to Install
Clone the below repository and compile the files into an executable using the GCC compiler.

```
https://github.com/Fraol123/simple_shell.git.
```


### Compilation

This code was compiled with the following flags:
     (ALX) $ gcc -Wall -Werror -pedantic *.c -o hsh

### Example Code
```
$ ls -l
```

### Authors

* [**Fraol Tolera**](https://github.com/Fraol123)
* [**Andrew Mukare**](https://github.com/JudgeFudge19)
* [**Ermias Teshome**](https://github.com/ermiast)


























