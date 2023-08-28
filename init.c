#include "monty.h"

void initialize()
{
	elements = malloc(sizeof(arg_a));
	if (elements == NULL)
	{
		dprintf(2, "Error: memory allocation failed\n");
		free(elements);
		exit(EXIT_FAILURE);
	}
	else
	{
		elements->str = NULL;
		elements->line = NULL;
		elements->n_tken = 0;
		elements->lnum = 0;
	}
}
