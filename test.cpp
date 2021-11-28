#include <iostream>
using namespace std;
void convertMinutesToHours(float minutes)
{
    float hours = minutes / 60;
    cout << minutes << " minutes to " << hours << " hours\n";
}
int main()
{
    int n;
    cin>>n;
    cout<<n%10;
    return 0;
}
