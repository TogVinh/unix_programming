#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main()
{
	int count = 0;

	signal(SIGINT, SIG_IGN);

	while (1)
	{
		printf(" %d", count);
		count++;
		fflush(stdout);
		sleep(1);
	}

	return 0;
}
