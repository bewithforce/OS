#include <unistd.h>
#include <iostream>
#include <signal.h>

using namespace std;
/*
int main() {
    unsigned long long n = UINT32_MAX;
    int *arr = new int[n];
    int i = 1;
    int t = fork();
    if (t != 0) {
        while (t > 0) {
            t = fork();
            if (t > 0) {
                i++;
            } else if (t < 0){
                cout << i << endl;
                break;
            }
        }
    }
    while (t >= 0) {
        if (0 == kill(getppid(), 0)) {
            sleep(10);
            arr = new int[n];
            continue;
        } else {
            break;
        }
    }
}
*/