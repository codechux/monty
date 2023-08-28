#include "monty.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 *
 */

void get_str(char *file)
{
	int fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}
	else
	{
		elements->str = fdopen(fd, "r");
	}
	if (elements->str == NULL)
	{
		close(fd);
		dprintf(2, "Error: can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}
}
