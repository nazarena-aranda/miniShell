#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("PID de mi padre: %u\n", getppid());
	return (0);
}
