#include <iostream>
#include <unistd.h>
#include <cstring>
#include <sys/stat.h>
#include <fcntl.h>
#include <string>

using namespace std;
/*
int main(int argc, char* argv[]){
    bool flag = true;
    for(int i = 0; i < argc; i++){
        if(strcmp(argv[i], "client") == 0){
            flag = false;
            break;
        }
    }
    if(flag){
        mkfifo("fifoIN", 0666);
        int fd = open("fifoIN", O_RDONLY | O_NONBLOCK );
        if(fd < 0){
            cout << errno << endl;
        }
        string msg;
        while(flag == true){
            char t[1];
            read(fd, t, 1);
            msg += t;
            if(msg.find_first_of("\n") != string::npos){
                if(msg.length() > 1)
                    cout << msg;
                msg = "";
            }
            usleep(100);
        }
    } else {
        int fd = open("fifoIN", O_WRONLY | O_NONBLOCK);
        if(fd < 0){
            cout << errno << endl;
            return 0;
        }
        string msg;
        cout << "input message" << endl;
        cin >> msg;
        msg += "\n";
        while(!msg.empty()){
            write(fd, msg.c_str(), msg.length());
            cout << "input message" << endl;
            cin >> msg;
            msg += "\n";
        }
        close(fd);
    }
}
*/