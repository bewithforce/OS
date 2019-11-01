#include <iostream>
#include <fstream>

using namespace std;

int main() {
    system("cd ../lab3 && ps -A > lab3.txt");
    ifstream is("../lab3/lab3.txt");
    string line;
    string max_pid_line;
    while(!is.eof()){
        max_pid_line = line;
        getline(is, line);
    }
    cout << max_pid_line.substr(0, max_pid_line.find(' ')) << endl;
}
