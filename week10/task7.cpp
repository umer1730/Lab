#include <iostream>
using namespace std;
int main() {
    string input, word, reversedString = "";
    cout << "Enter a string: ";
    getline(cin, input);
    int length = input.length();
    int i = length - 1;
    while (i >= 0) {
        while (i >= 0 && input[i] == ' ') {
            i--;  
        }
        if (i < 0) break;

        int end = i;
        while (i >= 0 && input[i] != ' ') {
            i--;  
        }
        if (!reversedString.empty()) {
            reversedString += " ";
        }
        reversedString += input.substr(i + 1, end - i);
    }
    cout << "Reversed string: " << reversedString << endl;
    return 0;
}