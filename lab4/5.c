#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/*
char* twice(char *a){
    char *result = (char*) malloc(1 + strlen(a) + strlen(a));
    strcpy(result, a);
    strcat(result, a);
    free(a);
    return result;
}

int main(){
    int fd[2];
    pipe(fd);
    int i = 0;
    char *a = (char*)malloc(1);
    strcpy(a, "a");

    while(write(fd[1], a, strlen(a)) > 0){
        a = twice(a);
    }
    int b= PIPE_BUF;


    printf(errno);
    return 0;

}
*/
