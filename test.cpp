#include <iostream>
using namespace std;
typedef struct dimensions
{
    float height;
    float width;
    float depth;
} Dimensions;
int main()
{
    Dimensions d1;
    d1.depth = 1;
    d1.height = 2;
    d1.width = 3;
}
