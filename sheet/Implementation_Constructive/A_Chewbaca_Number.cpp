#include <iostream>
#include <string>
using namespace std;

int main() {
    string number;
    cin >> number;

    // Iterate over each digit in the string
    for (int i = 0; i < number.length(); ++i) {
        int digit = number[i] - '0'; // Convert char to int
        int inverse = 9 - digit;
        
        // Ensure no leading zero in the result
        if (inverse < digit) {
            if (i == 0 && inverse == 0) continue; // Skip if it would make a leading zero
            number[i] = '0' + inverse; // Convert int back to char
        }
    }

    cout << number << endl;
    return 0;
}
