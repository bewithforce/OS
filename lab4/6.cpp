#include <unistd.h>
#include <string>

using namespace std;

int main(){
    if(fork()){
        string a = "a";
        for(int i = 0; i < 14; i++)
            a += a;
        while(true){
            write(2, a.c_str(), a.length());
        }

    } else {
        string b = "a";
        for(int i = 0; i < 17; i++)
            b += b;
        int ppid = getppid();
        while(true){
            write(2, b.c_str(), b.length());
            if(getppid() != ppid)
                return 0;
        }
    }

}

