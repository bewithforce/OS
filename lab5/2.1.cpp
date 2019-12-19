#include <unistd.h>
#include <string>

using namespace std;
/*
int main() {
    char line[12];
    int r = dup(0);
    int w = dup(1);

    write(w, "give me smth\n", 13);
    read(r, line, 12);

    int fds[2];
    pipe(fds);
    if (fork()) {
        write(fds[1], line, 12);
    } else {
        char newline[12];
        read(fds[0], newline, 12);
        string s = newline;
        s += " from fork";
        write(w, s.c_str(), s.length());
    }
}
*/