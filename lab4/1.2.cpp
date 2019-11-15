#include <fcntl.h>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>
/*
int main() {
    int fd;
    printf("First part\n");
    if((fd = open("myfile", O_WRONLY | O_CREAT, 0666)) < 0){
        printf("Can\'t open file\n");
        exit(-1);
    } else {
        printf("%d\n", fd);
    }
    if((fd = open("myfile", O_WRONLY | O_CREAT, 0666)) < 0){
        printf("Can\'t open file\n");
        exit(-1);
    } else {
        printf("%d\n", fd);
    }
    if(close(fd)<0){
        printf("Can\'t close file");
    }
    printf("Second part\n");
    if((fd = open("myfile", O_WRONLY | O_CREAT, 0666)) < 0){
        printf("Can\'t open file\n");
        exit(-1);
    } else {
        printf("%d\n", fd);
    }
    if(close(fd)<0){
        printf("Can\'t close file");
    }
    if((fd = open("myfile", O_WRONLY | O_CREAT, 0666)) < 0){
        printf("Can\'t open file\n");
        exit(-1);
    } else {
        printf("%d\n", fd);
    }
    if(close(fd)<0){
        printf("Can\'t close file");
    }
    return 0;
}
*/