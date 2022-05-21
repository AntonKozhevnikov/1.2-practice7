#include <iostream>
#include <fstream>
using namespace std;

int main() {
    system("chcp 65001");

    string line;

    ifstream fin("practice.txt");
    while (fin >> line)
        {
            cout << line << endl;
        }

    fin.close();

    return 0;
}
