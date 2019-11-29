#include <iostream>
#include <fstream>
#include <unistd.h>
#include <boost/interprocess/sync/file_lock.hpp>

using namespace std;
using namespace boost::interprocess;
/*
int main() {
    int max_pid = 0;
    fork();
    while(getpid() > max_pid){
        max_pid = getpid();
        fork();
    }
    file_lock fileLock("../lab3/lab3.txt");
    fileLock.lock();
    ofstream out("../lab3/lab3.txt");
    out << max_pid << endl;
    out.close();
    fileLock.unlock();
}
*/