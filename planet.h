#include <iostream>
using namespace std;
//planet class
class planet
{
    string name;
    double radius, mass;

public:
    planet();
    planet(char[]);
    planet(string, double, double);
    char *getname();
    double surfaceGravity();
    double gravityForce(double);
};