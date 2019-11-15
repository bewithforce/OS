#include <sys/stat.h>
#include <fcntl.h>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>
/*
int main() {
    int fd;
    size_t size;
    char string[] = "Hello, world!";
    umask(111);
    if((fd = open("myfile", O_WRONLY | O_CREAT, 0666)) < 0){
        printf("Can\'t open file\n");
        exit(-1);
    }
    size = write(fd, string, 14);
    if(size != 14){
        printf("can\'t write all string\n");
        exit(-1);
    }
    if(close(fd)<0){
        printf("Can\'t close file");
    }
    return 0;
}
*/