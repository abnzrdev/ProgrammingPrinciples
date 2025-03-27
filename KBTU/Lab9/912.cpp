#include <iostream>
#include <string>
using namespace std;

int main() {
    // Read the input string
    string str;
    cin >> str;

    // Initialize variables
    char max_char = str[0];
    int max_len = 1;
    char current_char = str[0];
    int current_len = 1;

    // Iterate through the string
    for (int i = 1; i < str.length(); i++) {
        if (str[i] == current_char) {
            current_len++;
        } else {
            if (current_len > max_len) {
                max_len = current_len;
                max_char = current_char;
            }
            current_char = str[i];
            current_len = 1;
        }
    }

    // Final check for the last substring
    if (current_len > max_len) {
        max_len = current_len;
        max_char = current_char;
    }

    // Print the result
    cout << max_char << " " << max_len << endl;

    return 0;
}