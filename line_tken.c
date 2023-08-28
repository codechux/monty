#include "monty.h"

/**
 */

void line_tken(void)
{
	int i = 0;
	char *lim = " \n", *token = NULL, *cpline = NULL;
	
	cpline = malloc(sizeof(char) * (strlen(elements->line) + 1));
	strcpy(cpline, elements->line);
	elements->n_tken = 0;
	token = strtok(cpline, lim);
	while (token)
	{
		elements->n_tken += 1;
		token = strtok(NULL, lim);
	}

	elements->tken = malloc(sizeof(char *) * (elements->n_tken + 1));
	strcpy(cpline, elements->line);
	token = strtok(cpline, lim);
	while (token)
	{
		elements->tken[i] = malloc(sizeof(char) * (strlen(token) + 1));
		if (elements->tken[i] == NULL)
		{
			dprintf(2, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		else
		{
			strcpy(elements->tken[i], token);
			token = strtok(NULL, lim);
			i++;
		}
	}
	elements->tken[i] = NULL;
	free(cpline);
}
