#include "monty.h"

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (elements->head == NULL)
		return;
	(void) line_number;
	(void) stack;

	tmp =  elements->head;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}	
