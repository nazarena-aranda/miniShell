#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	printf("$ ");
	while ((nread = getline(&line, &len, stdin)) != -1)
	{
		printf("%s", line);
		printf("$ ");
	}
	free(line);
	return (0);
}
