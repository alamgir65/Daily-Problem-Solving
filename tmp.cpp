#include <iostream>
#include <vector>

using namespace std;



int main() {
    int n = 4; // Example for a 4x4 matrix
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    traverseDiagonals(matrix, n);
    
    return 0;
}
