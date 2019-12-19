#include <unistd.h>
#include <string>

using namespace std;
/*
int main(){
    int r = dup(0);
    int w = dup(1);

    string str = "i'm child\n";
    char line[11];

    write(w, str.c_str(), str.length());

    read(r, line, 11);
    write(2, line, 11);
}
*/