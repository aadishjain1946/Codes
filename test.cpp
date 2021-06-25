#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string line;
    ifstream fileObject;
    fileObject.open("values.txt");
    while (fileObject && !fileObject.eof())
    {
        getline(fileObject, line);
        cout << line << endl;
    }
    fileObject.close();
}