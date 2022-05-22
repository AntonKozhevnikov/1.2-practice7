#include <iostream>
#include <fstream>
#include <string> 
using namespace std;
int main ()
{
    ifstream fin;
    fin.open("file.txt");
    string str;
    getline(fin,str);
    cout << str << endl;
    fin.close();
}

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n = 1000;
    char* buffer = new char[n+1]; buffer[n]=0;
    ifstream file("practice.txt");

    file.read(buffer,n);
    cout << buffer;
    file.close();

    return 0;
}
