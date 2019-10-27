#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/*
int main(){
	pid_t pid, ppid;
	int a = 0;
	a = a + 1;
	int t1 = fork(), t2;
	if(t1 != 0)
		t2 = fork();
	pid = getpid();
	ppid = getppid();
	if(t1 != 0)
		printf("my pid = %d, my ppid = %d, result = %d, from fork = %d %d\n", (int)pid, (int)ppid, a, t1, t2);
	else
		printf("my pid = %d, my ppid = %d, result = %d, from fork = %d\n", (int)pid, (int)ppid, a, t1);
}
*/