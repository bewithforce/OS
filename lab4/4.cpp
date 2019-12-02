#include <unistd.h>
#include <iostream>

using namespace std;
/*
int main(){
    int fd[2];
    pipe(fd);
    int i = 0;
    while(true){
        try{
            i++;
            write(fd[1], "Big Bang", 8);
            if(i > 1567)
                throw runtime_error("asd");
        } catch (...){
            cerr << "nobody read" << endl;
            break;
        }
    }
    pipe(fd);
    char answer[10];
    read(fd[0], answer, 10);
    return 0;
}

*/