#include <unistd.h>
#include <sys/stat.h>
#include <iostream>
#include <fcntl.h>

using namespace std;
/*
int main(){
    mkfifo("0byte", 0666);
    int fd = open("0byte", O_CREAT | O_RDWR | O_NONBLOCK, S_IRWXO);
    int t = fork();
    if(t  == 0){
        mkfifo("fifo", 0666);
        char line[12];
        read(fd, line, 11);
        string s = "line from fd___" ;
        s += line;
        s += "___fd\n";
        write(1, s.c_str(), s.length());
    } else {
        sleep(5);
        if(mkfifo("fifo", 0666) < 0){
            cout << "errno is " << errno << endl;
        } else {
            cout << "all is good" << endl;
        }
        write(fd, "hello there", 11);
    }
}
*/
