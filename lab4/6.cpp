#include <unistd.h>
#include <string>
#include <climits>
/*
using namespace std;

int main(){
    if(fork()){
        string a = "a";
        for(int i = 0; i < 6999; i++)
            a += a;
        while(true){
            write(1, a.c_str(), a.length());
        }

    } else {
        string b = "b";
        for(int i = 0; i < 6999; i++)
            b += b;
        int ppid = getppid();
        while(true){
            write(1, b.c_str(), b.length());
            if(getppid() != ppid)
                return 0;
        }
    }

    int a  = PIPE_BUF;

}
 */
/*
#define PIPE_BUF 4096
#include <cstdlib>
int main()
{
    printf("PIPE_BUF: %d\n", PIPE_BUF);
    int fd[2];
    pipe(fd);
    char str1[1024*8];
    char str2[1024*8];
    char str[1024*15];
    int i;
    for (i = 0; i < 1024*8; i++){
        str1[i] = 'a';
        str2[i] = 'b';
    }
    str1[1024*8 - 1] = '\0';
    str2[1024*8 - 1] = '\0';
    int pid = fork();
    if (pid == -1){
        printf("Can\'t fork child!\n");
        exit(-1);
    }
    for (i = 0; i < 3; i++) {//15
        printf("%d\n", i);
        if (pid > 0) { //Parent
            (void) write(fd[1], str1, 1024 * 8);
        } else if (pid == 0) { //Child
            (void) write(fd[1], str2, 1024 * 8);
        }
    }
    (void) read(fd[0], str, 1024*15);
    printf("%s", str);
    return 0;
}

*/