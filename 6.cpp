#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("file.txt");
    fin.seekg(0,ios_base::end);
    cout << fin.tellg();
    fin.close();
}
