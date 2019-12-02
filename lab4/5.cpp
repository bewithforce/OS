#include <unistd.h>
#include <iostream>
#include <string>

using namespace std;
/*
int main(){
    int fd[2];
    pipe(fd);
    int i = 0;
    string a = "a";

    while(write(fd[1], a.c_str(), a.length()) > 0){
        a += a;
    }

    cerr << errno << endl;

}

*/