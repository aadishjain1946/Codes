#include <iostream>
using namespace std;
struct Student
{
    string name, addresses, date_of_birth, courses_of_study;
    float GPA;
};
int main()
{
    struct Student s1;
    s1.name = "abcd";
    s1.addresses = "121/3 sdfgsd sdfsdf";
    s1.date_of_birth = "23/12/1988";
    s1.courses_of_study = "programing";
    s1.GPA = 4.5;
}
