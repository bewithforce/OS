#include <unistd.h>
#include <string>
#include <climits>
/*
int main() {
    int fd[2], i = 0;
    pipe(fd);
    while (true) {
        size_t size = write(fd[1], "Hello, world!", 14);
        if (size != 14) {
            printf("Can\'t write all string!\n");
            exit(-1);
        }
        printf("%lu\n", 14 * (i++) + size);
    }
}
*/