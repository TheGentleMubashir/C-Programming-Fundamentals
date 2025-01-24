#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream file("output.txt");
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            cout << line << '\n';
        }
        file.close();
    }
 return 0;
}