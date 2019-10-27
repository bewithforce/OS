#include <stdio.h>
#include <unistd.h>
/*
int main() {
    int t1 = fork();
    int t2 = fork();
    int t3 = fork();

    if (t1 != 0 && t2 != 0 && t3 != 0) {
        printf("I'm father\n");
    }
    if (t1 == 0 && t2 != 0 && t3 != 0) {
        printf("I'm elder son of father\n");
    }
    if (t2 == 0 && t1 != 0 && t3 != 0) {
        printf("I'm middle son of father\n");
    }
    if (t3 == 0 && t1 != 0 && t2 != 0) {
        printf("I'm younger son of father\n");
    }
    if (t1 == 0 && t2 == 0 && t3 != 0) {
        printf("I'm son #1 of elder son\n");
    }
    if (t1 == 0 && t3 == 0 && t2 != 0) {
        printf("I'm son #2 of elder son\n");
    }
    if (t1 == 0 && t2 == 0 && t3 == 0) {
        printf("I'm son #1 of son #2 of elder son\n");
    }
    if (t1 != 0 && t2 == 0 && t3 == 0) {
        printf("I'm son #1 of middle son\n");
    }
}
*/
