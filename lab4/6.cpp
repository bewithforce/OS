#include <unistd.h>
#include <string>
#include <fcntl.h>
#include <iostream>

using namespace std;

int main() {
    string str1(1024 * 8, 'a');
    string str2(1024 * 8, 'b');
    string res;

    int fd = open("in", O_WRONLY);

    for (int i = 1; i < 256 * 6; i++) {
        str1[i * 32] = '\n';
        str2[i * 32] = '\n';
    }
    str1[str1.length() - 1] = '\n';
    str2[str2.length() - 1] = '\n';

    int fds[2];
    pipe(fds);
    int flags = fcntl(fds[1], F_GETFL, 0);
    fcntl(fds[1], F_SETFL, flags | O_NONBLOCK);
    flags = fcntl(fds[0], F_GETFL, 0);
    fcntl(fds[0], F_SETFL, flags | O_NONBLOCK);

    if (fork() > 0)
        for (int i = 0; i < 40; i++) {
            write(fds[1], str1.c_str(), str1.length());
            char t[1024];
            read(fds[0], t, 1024);
            res += t;
            if(errno) {
                cerr << errno << endl;
                return 0;
            }
        }
    else
        for (int i = 0; i < 40; i++) {
            char t[1024];
            read(fds[0], t, 1024);
            res += t;
            write(fds[1], str2.c_str(), str2.length());
            if(errno) {
                cerr << errno << endl;
                return 0;
            }
        }
    cout << res << endl;
    return 0;
}

