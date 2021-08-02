
#include <iostream>
using namespace std;
#define INFY 9999
const int n = 5, s = 0, d = 3;
#define NILL -1
int getMin(int *arr, int *end)
{
    int min = INFY, min_index, v;
    for (v = 0; v < n; v++)
        if (!end[v] && arr[v] < min)
        {
            min = arr[v];
            min_index = v;
        }
    return min == INFY ? INFY : min_index;
}

void PrintPath(int *parent, int _d)
{
    if (parent[_d] == NILL)
    {
        cout << _d;
        return;
    }
    PrintPath(parent, parent[_d]);
    cout << "->" << _d;
}
void Dijkstra(int Graph[n][n], int _n, int _s, int _d)
{

    int i, u, v, count;
    int arr[n];
    int end[n] = {0};
    int pathlength[n] = {0};
    int parent[n];

    parent[_s] = NILL;

    for (i = 0; i < n; i++)
        arr[i] = INFY;

    arr[_s] = 0;
    for (count = 0; count < n - 1; count++)
    {
        u = getMin(arr, end);

        if (u == INFY)
            break;
        else
        {

            end[u] = 1;
            for (v = 0; v < n; v++)
            {
                if (!end[v] && Graph[u][v] && arr[u] + Graph[u][v] < arr[v])
                {
                    parent[v] = u;
                    pathlength[v] = pathlength[parent[v]] + 1;
                    arr[v] = arr[u] + Graph[u][v];
                }
                else if (!end[v] && Graph[u][v] && arr[u] + Graph[u][v] == arr[v] && pathlength[u] + 1 < pathlength[v])
                {
                    parent[v] = u;
                    pathlength[v] = pathlength[u] + 1;
                }
            }
        }
    }

    if (arr[_d] != INFY)
        PrintPath(parent, _d);
    else
        cout << "There is no path between vertex "
             << _s << "to vertex " << _d;
}

int main()
{

    int Graph[n][n] = {{0, 1, INFY, INFY, 10},
                       {1, 0, 4, INFY, INFY},
                       {INFY, 4, 0, 7, INFY},
                       {INFY, INFY, 7, 0, 2},
                       {10, INFY, INFY, 2, 0}};
    Dijkstra(Graph, n, s, d);
    return 0;
}
