//Gauss Elimination
#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <iterator>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    double Mat[2][3];
    vector<double> q(2);
    int Nx = 2, ii, jj, kk;

    Mat[1][1] = 2.0;
    Mat[1][2] = 3.0;
    Mat[1][3] = 2.5;
    Mat[2][1] = 1.3;
    Mat[2][2] = 3.0;
    Mat[2][3] = 2.5;         

    cout << "Matrix: " << endl;     
    for (ii = 0; ii < Nx; ii++) {
        for (jj = 0; jj < Nx + 1; jj++) {
            cout << Mat[ii][jj] << "   ";
            cout << endl;
        }
    }
    // Triangularization
    for (ii = 0; ii < Nx - 1; ii++)
        for (kk = ii + 1; kk < Nx; kk++)
        {
            double t = Mat[kk][ii] / Mat[ii][ii];
            for (jj = 0; jj <= Nx; jj++)
                Mat[kk][jj] = Mat[kk][jj] - t * Mat[ii][jj];
        }   // Resolution
    for (ii = Nx - 1; ii >= 0; ii--)
    {
        q[ii] = Mat[ii][Nx];
        for (jj = Nx - 1; jj > ii; jj--)                        
            q[ii] = q[ii] - Mat[ii][jj] * q[jj];
        q[ii] = q[ii] / Mat[ii][ii];
    }

    cout << "Solution of the system: " << endl;
    cout << q[1] << endl;
    cout << q[2] << endl; 


    return 0;
}