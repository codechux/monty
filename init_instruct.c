#include "monty.h"

/**
 *
 */

void init_instruct(void)
{
	stack_t *stack = NULL;

	if (elements->n_tken == 0)
		return;
	elements->instruction->f(&stack, elements->lnum);
}
