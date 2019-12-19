#include <unistd.h>

/*
int main(){
    char line[12];
    int r = dup(0);
    int w = dup(1);
    read(r, line, 12);
    for(int i = 0; i < 12; i++){
        line[i] = line[i] + '0';
    }
    write(w, line, 12);
}
*/