#include <iostream>
#include <utility>
#include <string.h>
using namespace std;
pair<bool, bool> hasDashOnBothSides(int argc, char **argv)
{
    bool ans1 = true, ans2 = false;
    for (int i = 1; i < argc; i++)
    {
        if (strlen(argv[i]) == 1 && argv[i][0] == '-')
        {
            ans2 = true;
        }
        if (argv[i][0] != '-' || argv[i][strlen(argv[i]) - 1] != '-')
        {
            ans1 = false;
        }
    }
    return {ans1, ans2};
}
int main(int argc, char **argv)
{
    pair<bool, bool> ans = hasDashOnBothSides(argc, argv);
    cout << "Output: " << ((ans.first) ? "True" : "False") << " " << ((ans.second) ? "True" : "False") << '\n';
    return 0;
}
