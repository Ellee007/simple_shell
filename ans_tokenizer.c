#include "shell.h"
/**
 * tokenize - tokenizes a stirng
 * @lineptr: what the user inputed
 * Return: a ptr to arr of ptrs
 */

char **tokenize(char *lineptr)
{
	char **user_command = NULL;
	char *token = NULL;
	size_t a = 0;
	int size = 0;

	if (lineptr == NULL)
		return (NULL);

	for (a = 0; lineptr[a]; a++)
	{
		if (lineptr[a] == ' ')
			size++;
	}
	if ((size + 1) == _strlen(lineptr))
		return (NULL);
	user_command = malloc(sizeof(char *) * (size + 2));
	if (user_command == NULL)
		return (NULL);

	token = strtok(lineptr, " \n\t\r");

	for (a = 0; token != NULL; a++)
	{
		user_command[a] = token;
		token = strtok(NULL, " \n\t\r");
	}
	user_command[a] = NULL;
	return (user_command);
}
