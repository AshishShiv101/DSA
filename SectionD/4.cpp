/*Write a C program to compare two C-style strings for equality without using strcmp().*/

#include <iostream>

using namespace std;

bool compareStrings(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return false;
        }
        i++;
    }

    // Ensure both strings end at the same length
    return (str1[i] == '\0' && str2[i] == '\0');
}

int main() {
    char str1[100], str2[100];

    cout << "Enter a string: ";
    cin.getline(str1, 100);

    cout << "Enter another string: ";
    cin.getline(str2, 100);

    if (compareStrings(str1, str2)) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    return 0;
}