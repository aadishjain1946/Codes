#include <iostream>
#include <string>
using namespace std;
const int WIDTH = 5;
const int HEIGHT = 5;
int x_cor[] = {0, 0, 1, -1};
int y_cor[] = {1, -1, 0, 0};
bool checkCoordinates(int x, int y)
{
    return (x >= 0 && x < HEIGHT && y >= 0 && y < WIDTH);
}
void check(int x, int y, int dest_x, int dest_y,
           int (&maze)[HEIGHT][WIDTH], std::string &path, int (&visited)[HEIGHT][WIDTH])
{
    //   if (x < 0 || y < 0 || x >= WIDTH|| y >= HEIGHT || !maze[y][x]) {
    //     return;
    //   }
    if (x == dest_x && y == dest_y)
    {
        std::cout << path;
        std::cout << x << ","<<y << '\n';
        return;
    }
    visited[x][y] = 1;
    int len = path.size();
    path += (char)('0' + x);
    path += ',';
    path += (char)('0' + y);
    path += " > ";
    for (int k = 0; k < 4; k++)
    {
        int newi = x + x_cor[k];
        int newj = y + y_cor[k];
        if (checkCoordinates(newi, newj) && maze[newi][newj] == 1 && visited[newi][newj] == 0)
        {
            check(newi, newj, dest_x, dest_y, maze, path, visited);
            visited[newi][newj] = 0;
        }
    }

    path.resize(len);
}

int main()
{
    int maze[HEIGHT][WIDTH] = {
        {1, 1, 1, 1, 1},
        {1, 1, 1, 0, 1},
        {0, 1, 1, 0, 1},
        {0, 1, 0, 0, 1},
        {0, 1, 1, 1, 1}};
    int visited[HEIGHT][WIDTH];
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            visited[i][j] = 0;
        }
    }
    std::string path;
    check(0, 0, 4, 4, maze, path, visited);
    return 0;
}