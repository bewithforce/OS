#include <unistd.h>
#include <string>
#include <random>

using namespace std;
/*
int main(){
    int w = dup(1);

    random_device rd;
    mt19937 mt(rd());
    uniform_real_distribution<double> dist(1.0, 11230.0);

    string str = "i'm child " + to_string(dist(mt)) + "\n";

    write(w, str.c_str(), str.length());
}
*/