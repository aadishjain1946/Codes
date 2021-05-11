//Header files
#include <iostream>
#include <string>
using namespace std;
//Largeintegr class
class largeInteger
{
    //Data member for number store
    //Maximum 20 digits
private:
    int no[20];
    //Member methods
public:
    largeInteger();
    largeInteger(string num);
    void setInteger(string num);
    largeInteger getInteger();
    void print();
    largeInteger operator+(largeInteger &num);
    largeInteger operator-(largeInteger &num);
    bool operator=(largeInteger &num);
    largeInteger operator*(largeInteger &num);
};