#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int matrix[5][5]; // Using a static array for simplicity

    // Input matrix elements
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    // Find the position of '1'
    int posX = -1, posY = -1; // Initialize position variables
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                posX = i;
                posY = j;
                break; // Stop once '1' is found
            }
        }
        if (posX != -1) break; // Stop outer loop once '1' is found
    }

    // Calculate the minimum moves to center (2, 2)
    int move = abs(2 - posX) + abs(2 - posY);

    // Output only the integer move
    cout << move << endl;
    return 0;
}

/*

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<vector<int>> matrix(5, vector<int>(5));

    // Input matrix elements
    cout << "Enter 25 integers to fill the 5x5 matrix:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    int move = 0;
    // Find the position of 1 and calculate the minimum moves to center (2, 2)
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
*/