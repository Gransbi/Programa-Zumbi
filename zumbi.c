#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void) {
	pid_t filho;
  
	filho = fork();

	if (filho == 0) {
		exit(0);
	}
	sleep(10);
	wait(NULL);
	printf("fim");
	return 0;
}