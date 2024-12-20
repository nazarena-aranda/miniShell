#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **div_string(char *str)
{
	int size = 10, i = 0;
	char **words = malloc(size * sizeof(char *));
	char *token;

	if (words == NULL)
	{
		perror("Error al asignar memoria");
		return (NULL);
	}

	token = strtok(str, " ");
	while (token != NULL)
	{
		words[i++] = token;
		if (i >= size)
		{
			size *= 2;
			words = realloc(words, size * sizeof(char *));
			if (words == NULL)
			{
				perror("Error al redimensionar memoria");
				return (NULL);
			}
		}
		token = strtok(NULL, " ");
	}
	words[i] = NULL;
	return (words);
}

int main(void)
{
	char input[1024] = "Hola mundo desde C";
	char **words;
	int i;

	words = div_string(input);
	if (words == NULL)
	{
		return (1);
	}

	for (i = 0; words[i]; i++)
	{
		printf("Palabra %d: %s\n", i, words[i]);
	}

	free(words);
	return (0);
}

