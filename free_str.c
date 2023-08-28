#include "monty.h"

/**
 *
 */

void close_stream(void)
{
	if (elements->str == NULL)
		return;
	fclose(elements->str);
	elements->str = NULL;
}
