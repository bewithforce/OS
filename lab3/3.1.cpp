#include <unistd.h>

int main(int argc, char* argv[], char *envp[]){
    write(1, "execle\n", 7);
    execle("b.out", argv[argc - 1], NULL, envp);
}
