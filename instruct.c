#include "monty.h"

/**
 *
 */

void instruction(void)
{
	int i = 0;
	instruction_t instructions[] = {
		{"push", &push}, {"pall", &pall},
		/*{"pint", &pint}, {"swap", &swap},
		{"nop", &nop}, {"add", &add},
		{"pop", &pop}, {"sub", &sub},
		{"div", &_div}, {"mul", &mul},
		{"rotl", &rotl}, {"rotr", &rotr},
		{"stack", &stack}, {"queue", &queue},
		{"pstr", &pstr}, {"pchar", &pchar},
		{"mod", &mod},*/
		{NULL, NULL}
	};

	if (elements->n_tken == 0)
		return;
	for (; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(instructions[i].opcode, elements->tken[0]) == 0)
		{
			elements->instruction->opcode = instructions[i].opcode;
			elements->instruction->f = instructions[i].f;
			return;
		}
	}
	instruction_failed();
}
