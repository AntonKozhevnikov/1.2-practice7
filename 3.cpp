#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("practice7.txt");
    string line;
    cout << "¬ведите чисо строк, которое нужно прочитать из файла:\n";
    cin >> n;
    for (int i = 1; i <= n; ++i){
        getline(fin, line);
        {
            cout << line << endl;
        }
    }

    fin.close();

    return 0;
}

#include <iostream>
#include <fstream>
using namespace std;
 int main ()
{
    ifstream fin;
    fin.open("practice7.txt");
    char str;
    while(fin.read((char*)&str,sizeof (char)))
    {
        cout << str;
    }
    fin.close();
}
