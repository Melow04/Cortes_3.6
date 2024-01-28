#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    const int MAX_LENGTH = 500;
    char inputString[MAX_LENGTH];
    int i, length, wordFlow = 0;

    cout << "Enter a string: ";
    cin.getline(inputString, MAX_LENGTH);

    length = strlen(inputString);

    for (i = 0; i <= length; ++i) {
        if (isspace(inputString[i]) || inputString[i] == '\0') {
            for (int j = wordFlow; j < i; ++j) {
                cout << inputString[j];
            }
            cout << "\n";
            wordFlow = i + 1;
        }
    }

    return 0;
}
