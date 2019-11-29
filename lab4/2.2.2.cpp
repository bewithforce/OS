#include <unistd.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]){
    char line[13];
    read(stoi(argv[argc - 1]), line, 13);
    write(1, line, 13);
}
