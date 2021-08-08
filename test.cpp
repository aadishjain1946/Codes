#include <iostream>
#include <fstream>
using namespace std;
#include <stack>
bool checkRedundantBrackets(char *input)
{
    // Write your code here
    stack<char> s;
    for (int i = 0; input[i] != '\0'; i++)
    {
        int c = 0;
        if (input[i] == ')')
        {
            while (s.top() != '(')
            {
                c++;
                s.pop();
            }
            if (c == 0)
            {
                return true;
            }
            s.pop();
        }
        else
        {
            s.push(input[i]);
        }
    }
    return false;
}
//function to read file from the text file
int readFile(string fileName, float arr[])
{
    string data;
    ifstream fileObj;
    fileObj.open(fileName);
    int i = 0;
    while (fileObj && !fileObj.eof())
    {
        getline(fileObj, data);
        arr[i] = std::stof(data);
        i++;
    }
    fileObj.close();
    return i;
}
//function to append two array into the third array
int append(float arr1[], int n1, float arr2[], int n2, float append[])
{
    int k = 0;
    for (int i = 0; i < n1; i++, k++)
    {
        append[k] = arr1[i];
    }
    for (int i = 0; i < n2; i++, k++)
    {
        append[k] = arr2[i];
    }
    return k;
}
//function to write data to the text file
void writeFile(float appendArray[], int n, string fileName)
{
    ofstream fileObj;
    fileObj.open(fileName);
    for (int i = 0; i < n; i++)
    {
        fileObj << appendArray[i] << endl;
    }
    fileObj.close();
}
int main()
{
    double x = 4 % 2 + 2 * (4 - 2 / 2);
    int f = 5, g = 20;
    cout << x;
    cout << "The Result is:"
         << "f*g"
         << "=" << f + g + 75;
}