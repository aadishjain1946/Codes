#include <iostream>
using namespace std;
int main()
{
    char cont = 'y';
    while (cont == 'y')
    {
        string input;
        cout << "Enter a list of integers:\n";
        cin.ignore();
        getline(cin, input);
        string sudo = "";
        int maxNum = INT_MIN, minNum = INT_MAX;
        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] == ' ')
            {
                int num = std::stoi(sudo);
                maxNum = max(num, maxNum);
                minNum = min(num, minNum);
                sudo = "";
            }
            sudo += input[i];
        }
        int num = std::stoi(sudo);
        maxNum = max(num, maxNum);
        minNum = min(num, minNum);
        sudo = "";
        cout << "The max of intgers you entered is " << maxNum << '\n';
        cout << "The min of intgers you entered is " << minNum << '\n';
        cout << "\nContinue? (y/n)\n";
        cin >> cont;
    }

    return 0;
}
