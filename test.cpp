#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        string data;
        //creating file object
        ifstream fileObject;
        //opening the file, name given as command line argument
        fileObject.open(argv[i]);
        cout << "\n"
             << i << ") Printing data of file " << argv[i] << '\n';
        //reading file data
        while (fileObject && !fileObject.eof())
        {
            getline(fileObject, data);
            cout << data << endl;
        }
        fileObject.close();
    }
}