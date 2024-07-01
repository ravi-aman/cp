#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of statements
    int x = 0; // Initialize x to 0

    // Process each statement
    for (int i = 0; i < n; ++i) {
        string statement;
        cin >> statement;
        if (statement.find("++") != string::npos) {
            x += 1; // Increment x if the statement contains "++"
        } else if (statement.find("--") != string::npos) {
            x -= 1; // Decrement x if the statement contains "--"
        }
    }

    // Print the final value of x
    cout << x << endl;

    return 0;
}
