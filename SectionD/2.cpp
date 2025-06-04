/*Write a C function that takes a C-style string (char array) as input and returns its length
without using strlen().*/


#include <iostream>
using namespace std;

int stringLength(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Length of the string is: " << stringLength(str) << endl;
    return 0;
}

