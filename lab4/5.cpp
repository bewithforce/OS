#include <unistd.h>
#include <string>
#include <fcntl.h>

int main() {
    int fd[2], i = 0;
    pipe(fd);
    int flags = fcntl(fd[0], F_GETFL, 0);
    fcntl(fd[1], F_SETFL, flags | O_NONBLOCK);
    while (true) {
        size_t size = write(fd[1], "Hello, world!", 14);
        if (size != 14) {
            printf("Can\'t write all string!\n");
            exit(-1);
        }
        printf("%lu\n", 14 * (i++) + size);
    }
}
