#include <iostream>
#include <unistd.h>

using namespace std;

int main(int argc, char *argv[]) {
    int fds[2];
    pipe(fds);
    write(fds[1], "Hello, World!", 13);
    execl("b.out", to_string(fds[0]).c_str(), NULL);
    cout << errno << endl;
    exit(errno);
}
