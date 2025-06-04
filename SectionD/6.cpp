/*Write a Cpp program to reverse a C-style string in place.*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str1;
    cout << "enter a string" << endl;
    cin >> str1;
    int n = str1.length();
    string rev = "";

    for(int i=n-1; i>=0; i--){
         rev += str1[i];

    }
    cout << rev << endl;
    return 0;
}