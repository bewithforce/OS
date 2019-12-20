#include <unistd.h>
#include <iostream>
#include <fcntl.h>

using namespace std;

int main() {
    int fd[2];

    pipe(fd);
    int flags = fcntl(fd[1], F_GETFL, 0);
    fcntl(fd[1], F_SETFL, flags | O_NONBLOCK);

    while (true) {
        if (write(fd[1], "Big Bang", 8) < 0) {
            cout << errno << endl;
            break;
        }
    }
    pipe(fd);
    flags = fcntl(fd[0], F_GETFL, 0);
    fcntl(fd[0], F_SETFL, flags | O_NONBLOCK);
    char answer[10];
    read(fd[0], answer, 10);
    return 0;
}

