#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fileObject;
    fileObject.open("result.txt");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            fileObject << "*";
        }
        fileObject << "\n";
    }
}
