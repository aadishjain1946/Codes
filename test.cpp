#include <iostream>
using namespace std;
void printInformation(string fullName, int matrixNo, string group)
{
    cout << "Full Name: " << fullName << '\n';
    cout << "Matrix Number: " << matrixNo << "\n";
    cout << "Group: " << group << '\n';
}
void plagarismStatement()
{
    cout << "I confirm that this LAB TEST is my own work and is not copied.\n";
}
int main()
{
    printInformation("Alan Luna", 123, "A");
    plagarismStatement();
    return 0;
}
