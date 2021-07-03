#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 11;
    int array[] = {698, 685, 692, 731, 728, 712, 738, 724, 689, 685, 682};
    double mean = 0, median = 0;
    map<int, int> freq;
    // calculating mean of the given array
    for (int i = 0; i < n; i++)
    {
        mean += array[i];
        freq[array[i]] += 1;
    }
    mean /= n;
    cout << "Mean: " << mean << "\n";

    //calculating median of the given array
    sort(array, array + n);
    (n % 2 == 0) ? median = (array[(n / 2)] + array[(n / 2) + 1]) / 2 : median = array[(n / 2)];
    cout << "Median: " << median << "\n";

    //calculating mode of the gien array
    int maxFreq = -1;
    cout << "Mode: ";
    for (auto i : freq)
    {
        maxFreq = max(maxFreq, i.second);
    }
    for (auto i : freq)
    {
        if (i.second == maxFreq)
        {
            cout << i.first << " ";
        }
    }
}

