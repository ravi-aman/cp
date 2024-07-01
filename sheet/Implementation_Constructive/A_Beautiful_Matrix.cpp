#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix(5, vector<int>(5));

    // Input matrix elements
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    int move = 0;
    // Find the position of 1 and calculate the minimum moves
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (matrix[i][j] == 1) {
                move = abs(2 - i) + abs(2 - j);
            }
        }
    }

    // Output only the integer move
    cout << move << endl;
    return 0;
}
