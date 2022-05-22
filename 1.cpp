#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream object;
    object.open("practice7.txt");
    object << "work with files";
    object.close();
    return 0;
}
