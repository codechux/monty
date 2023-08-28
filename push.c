#include "monty.h"

/**
 */

void push(stack_t **stack, unsigned int line_number)
{
	if (elements->n_tken <= 1 || !(is_number(elements->tken[1])))
	{
		dprintf(2, "L%d: usage: push interger\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		(*stack)->next = (*stack)->prev = NULL;
		(*stack)->n = (int) atoi(elements->tken[1]);
	}
	if (elements->head != NULL)
	{
		(*stack)->next = elements->head;
		elements->head->prev = *stack;
	}
	else
	{
		elements->head = *stack;
		elements->stack_length += 1;
	}
}
