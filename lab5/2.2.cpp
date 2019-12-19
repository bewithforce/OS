#include <unistd.h>
#include <string>

using namespace std;
/*
int main(){
    int fds1[2];
    int fds2[2];
    pipe(fds1);
    pipe(fds2);
    dup2(fds1[0], 0);
    dup2(fds1[1], 1);
    dup2(fds2[0], 3);
    dup2(fds2[1], 4);

    if(!fork()){
        execl("2.2.1.out",  nullptr);
    }

    int r = dup(3);
    int w = dup(4);

    string str = "i'm father\n";
    char line[10];

    write(w, str.c_str(), str.length());

    sleep(4);

    read(r, line, 10);
    write(2, line, 10);
}
*/