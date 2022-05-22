#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 int main()
{
    ifstream fin;
    fin.open("practice7.txt");
    char C[5];
    while (!fin.eof())
    {
        fin >> C;
        cout << C << endl;

    }
    fin.close();
 }
