#include "monty.h"

/**
 *
 */

void validate(int argc)
{
	if (argc == 2)
		return;
	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
