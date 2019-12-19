#include <unistd.h>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int fd1[2];
    int fd2[2];
    pipe(fd1);
    pipe(fd2);
    if(fork() > 0){
        while(true){
            char answer[1];
            write(fd1[1], "a", 1);
            read(fd2[0], answer, 1);
            write(2, answer, 1);
        }
    } else {
        while(true){
            char answer[1];
            read(fd1[0], answer, 1);
            write(2, answer, 1);
            write(fd2[1], "b", 1);
        }
    }
}
