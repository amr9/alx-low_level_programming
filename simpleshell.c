#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024
#define PATH_MAX 4096

/**
 * display_prompt - Displays the shell prompt.
 */
void display_prompt(void)
{
	printf("($) ");
}

/**
 * execute_command - Executes a command.
 * @command: The command to be executed.
 */
void execute_command(char *command)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == 0)
	{
		char *args[2];
		char *path;
		char *token;
		char full_path[PATH_MAX];

		args[0] = command;
		args[1] = NULL;
		path = getenv("PATH");
		token = strtok(path, ":");

		while (token != NULL)
		{
			snprintf(full_path, sizeof(full_path), "%s/%s", token, command);
			if (access(full_path, F_OK) == 0)
			{
				if (execve(full_path, args, NULL) == -1)
				{
					perror("shell");
					exit(EXIT_FAILURE);
				}
			}
			token = strtok(NULL, ":");
		}

		fprintf(stderr, "shell: command not found: %s\n", command);
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("shell");
	}
	else
	{
		waitpid(pid, &status, 0);
	}
}

/**
 * main - Main function for the simple shell.
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure.
 */
int main(void)
{
	char buffer[BUFFER_SIZE];

	while (1)
	{
		display_prompt();

		if (fgets(buffer, sizeof(buffer), stdin) == NULL)
		{
			printf("\n");
			break;
		}

		buffer[strcspn(buffer, "\n")] = '\0';

		if (strcmp(buffer, "exit") == 0)
		{
			break;
		}

		execute_command(buffer);
	}

	return (EXIT_SUCCESS);
}
