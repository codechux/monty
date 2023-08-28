#include "monty.h"

/**
 *
 */

void free_tken(void)
{
	int i = 0;

	if (elements->tken == NULL)
		return;
	while (elements->tken[i])
	{
		free(elements->tken[i]);
		i++;
	}
	free(elements->tken);
	elements->tken = NULL;
}
