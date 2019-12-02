#include <unistd.h>
#include <iostream>
#include <cstring>

using namespace std;
/*
int main(){
    int fd[2];
    pipe(fd);
    char answer[1];
    int pid = fork();
    if(pid > 0){
        int i = 0;
        while(true){
            write(fd[1], "a", 1);
            usleep(10);
            read(fd[0], answer, 1);
            if(!strncmp(answer, "a", 1)){
                cout << "parent read child answers for " << i << " times" << endl;
                cout << "but now he reads his own record"<< endl;
                break;
            } else {
                i++;
            }
        }
    } else {
        int ppid = getppid();
        while(true){
            read(fd[0], answer, 1);
            usleep(10);
            write(fd[1], "b", 1);
            if(getppid() != ppid){
                break;
            }
        }
    }
}
*/