#include <unistd.h>

int main(int argc, char* argv[]){
    write(1, "execvp\n", 7);
    execvp("/home/dzianis/Projects/C++/OS/lab3/c.out", argv);
}
