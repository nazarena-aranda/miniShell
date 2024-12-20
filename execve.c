#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", NULL};
	char *envp[] = {NULL};

	printf("Antes de execve\n");
	if (execve(argv[0], argv, envp) == -1)
	{
		perror("Error al ejecutar execve");
	}
	printf("Después de execve (nunca se ejecutará si execve tiene éxito)\n");
	return (0);
}

