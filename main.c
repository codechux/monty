#include "monty.h"

arg_a *elements = NULL;
/**
 *
 *
 */

int main(int argc, char **argv)
{
	size_t n = 0;

	validate(argc);
	initialize();
	get_str(argv[1]);

	while (getline(&elements->line, &n, elements->str) != -1)
	{
		printf("%s", elements->line);
	}

	return (0);
}
