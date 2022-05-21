#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream object;
    object.open("practice.txt");
    object << "Задание 1";
    object.close();
    return 0;
}
