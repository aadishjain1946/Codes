#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
//class to store user data after reading from text file
class userData
{
public:
    string firstName, lastName, secondName, maidenName;
    //default constructor
    userData() {}
    //parametrized constructor
    userData(string firstName, string lastName, string secondName, string maidenName)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->secondName = secondName;
        this->maidenName = maidenName;
    }
};

//function to compare two userData object while sorting
bool compare(userData a, userData b, int cmp)
{
    if (cmp == 1)
    {
        return (a.lastName < b.lastName);
    }
    else if (cmp == 2)
    {
        return (a.maidenName < b.maidenName);
    }
    else if (cmp == 3)
    {
        return (a.firstName < b.firstName);
    }
    else
    {
        return (a.secondName < b.secondName);
    }
}
//function to sort data using selection sort
void selectionSort(vector<userData> &userArr, int cmp)
{
    int minEle;
    int n = userArr.size();
    for (int i = 0; i < n - 1; i++)
    {
        minEle = i;
        for (int j = i + 1; j < n; j++)
        {
            if (compare(userArr[j], userArr[minEle], cmp))
            {
                minEle = j;
            }
        }
        userData temp = userArr[minEle];
        userArr[minEle] = userArr[i];
        userArr[i] = temp;
    }
}

int main()
{
    //prompt user to enter file name
    string fileName;
    cout << "Enter File Name: ";
    cin >> fileName;
    //creating data vector to store data after reading it from text file
    vector<userData> userDataArray;
    string header;
    string lineData;
    //creating file object
    ifstream fileInObject;
    fileInObject.open(fileName);
    int cnt = 1;
    //reading file line by line
    while (fileInObject && !fileInObject.eof())
    {
        getline(fileInObject, lineData);
        if (cnt % 2 == 0)
        {
            if (cnt == 2)
            {
                header = lineData;
            }
            else
            {
                //creating userData variable to store 1 record
                userData temp;
                lineData = lineData.substr(1);
                int nm = 0;
                string sudo;
                for (int i = 0; i < lineData.length(); i++)
                {
                    if (lineData[i] == '|')
                    {
                        if (nm == 0)
                        {
                            temp.lastName = sudo;
                        }
                        else if (nm == 1)
                        {
                            temp.maidenName = sudo;
                        }
                        else if (nm == 2)
                        {
                            temp.firstName = sudo;
                        }
                        else
                        {
                            temp.secondName = sudo;
                        }

                        sudo = "";
                        nm++;
                        continue;
                    }
                    sudo += lineData[i];
                }
                userDataArray.push_back(temp);
            }
        }
        cnt++;
    }
    fileInObject.close();
    //sorting data by Last Name
    selectionSort(userDataArray, 1); //sorting data by Mother’s Maiden Name
    selectionSort(userDataArray, 2);
    //sorting data by First Name
    selectionSort(userDataArray, 3);
    //sorting data by Second Name
    selectionSort(userDataArray, 4);
    //printing first 10 records on console
    cout << "OUTPUT ON CONSOLE\n";
    cout << "----------------------------------------------------------------\n";
    cout << header << '\n';
    cout << "----------------------------------------------------------------\n";
    for (int i = 0; i < ((userDataArray.size() > 10) ? 10 : userDataArray.size()); i++)
    {
        cout << "|" << userDataArray[i].lastName << "|"
             << userDataArray[i].maidenName << "|"
             << userDataArray[i].firstName << "|"
             << userDataArray[i].secondName << "|\n";
        cout << "----------------------------------------------------------------\n";
    }
    //storing all data back to text file
    ofstream fileOutObject;
    fileOutObject.open(fileName);
    fileOutObject << "----------------------------------------------------------------\n";
    fileOutObject << header << '\n';
    fileOutObject << "----------------------------------------------------------------\n";
    for (int i = 0; i < userDataArray.size(); i++)
    {
        fileOutObject << "|" << userDataArray[i].lastName << "|"
                      << userDataArray[i].maidenName << "|"
                      << userDataArray[i].firstName << "|"
                      << userDataArray[i].secondName << "|\n";
        fileOutObject << "----------------------------------------------------------------\n";
    }
    fileOutObject.close();
}