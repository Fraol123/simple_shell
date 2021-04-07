#include "shell.h"



char **reallocate(char **pointer, size_t *size)
{
	char **new_pointer;
	size_t i;
	/* add 10 too previous memory location */
	new_pointer = malloc(sizeof(char *) * ((*size) + 10));
	if (new_pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	/* coping the old ptr to new */ 
	for (i = 0; i < (*size); i++)
	{
		new_pointer[i] = pointer[i];
	}

	*size += 10;
	free(pointer);
	return (new_pointer);
}
	
