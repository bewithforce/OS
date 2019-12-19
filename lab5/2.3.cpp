#include <unistd.h>
#include <iostream>
#include <wait.h>

using namespace std;
/*
int main(){
    int n;
    cin >> n;

    int fds[2];


    for(int i = 0; i < n; i++){
        dup2(fds[0], 0);
        dup2(fds[1], 1);
        int t = fork();
        if(!t){
            execl("2.3.1.out",  nullptr);
        }
        waitpid(t, nullptr, 0);
        char line[10];
        read(0, line, 10);
        write(2, line, 10);
    }
}
*/