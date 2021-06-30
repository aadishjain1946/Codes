#include <bits/stdc++.h>
using namespace std;
//time class to store time and do some operations
class Time
{
    int hour, minute, second;

public:
    //default constructor to initialize object with value 0
    Time()
    {
        this->hour = 0;
        this->minute = 0;
        this->second = 0;
    }
    //parametrized constructor to initialize object with givtn value
    Time(int hour, int minute, int second)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    //function to set time
    void setTime(int hour, int minute, int second)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    //function to print time in military format
    void printMilitary()
    {
        cout << "Military Time: ";
        cout << std::setw(2) << std::setfill('0') << this->hour << " : ";
        cout << std::setw(2) << std::setfill('0') << this->minute << " : ";
        cout << std::setw(2) << std::setfill('0') << this->second << '\n';
    }
    //function to print time in standard format
    void printStandar()
    {
        int hours = this->hour;
        string sudo = "AM";
        if (hour > 12)
        {
            hour -= 12;
            sudo = "PM";
        }
        cout << "Standard Time: ";
        cout << std::setw(2) << std::setfill('0') << hour << " : ";
        cout << std::setw(2) << std::setfill('0') << this->minute << " : ";
        cout << std::setw(2) << std::setfill('0') << this->second << " " << sudo << '\n';
    }
};
int main()
{
    //testing the time class
    cout << "#T1\n";
    Time T1(1, 5, 25);
    T1.printMilitary();
    T1.printStandar();

    cout << "\n#T2\n";
    Time T2(15, 25, 30);
    T2.printMilitary();
    T2.printStandar();
}

