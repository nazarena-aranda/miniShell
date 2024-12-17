#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		printf("Soy el proceso hijo: %u\n", getpid());
	}
	else
	{
		printf("Soy el proceso padre: %u\n", getpid());
	}

	return (0);
}

