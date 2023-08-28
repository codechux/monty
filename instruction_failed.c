#include "monty.h"

/**
 *
 */

void instruction_failed(void)
{
	dprintf(2, "L%d: unknown instruction %s\n",
			elements->lnum, elements->tken[0]);
	close_stream();
	free_tken();
	exit(EXIT_FAILURE);
}
