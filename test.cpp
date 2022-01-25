#include <iostream>
using namespace std;
bool checkPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    int mixed[30], prime[30];
    int choices = -1;
    int k = 0;
    while (choices != 5)
    {
        cout << "1- Fill the array Mixed with random integer numbers between 10 and 90.\n";
        cout << "2- Read the array Mixed and copy all prime numbers to the array Prime.\n";
        cout << "3- Print the content of both arrays.\n";
        cout << "4- Find and return the sum of even numbers in the array Mixed.\n";
        cout << "5- Exit\n";
        cout << "Enter: ";
        cin >> choices;
        if (choices == 1)
        {
            for (int i = 0; i < 30; i++)
            {
                mixed[i] = 10 + (std::rand() % (90 - 10 + 1));
            }
            cout << "Mixed array filed with random integer numbers between 10 and 90.\n\n";
        }
        else if (choices == 2)
        {
            for (int i = 0; i < 30; i++)
            {
                if (checkPrime(mixed[i]))
                {
                    prime[k++] = mixed[i];
                }
            }
            cout << "All prime numbers are copied to the array Prime.\n\n";
        }
        else if (choices == 3)
        {
            cout << "Mixed: ";
            for (int i = 0; i < 30; i++)
            {
                cout << mixed[i] << " ";
            }
            cout << "\nPrime: ";
            for (int i = 0; i < k; i++)
            {
                cout << prime[i] << " ";
            }
            cout << "\n\n";
        }
        else if (choices == 4)
        {
            int sum = 0;
            for (int i = 0; i < 30; i++)
            {
                if (mixed[i] % 2 == 0)
                {
                    sum += mixed[i];
                }
            }
            cout << "Sum of even numbers in mixed arrays is " << sum << "\n\n";
        }
        else
        {
            break;
        }
    }
    return 0;
}
