#include <stdio.h>


int main(int argc, char *argv[])
{
	int pid;
	if ( pid = fork()){
		printf("in child: %d\n", getpid());
	} else {
		printf("inparent: %d\n", getpid());
	}
	return 0;
}
