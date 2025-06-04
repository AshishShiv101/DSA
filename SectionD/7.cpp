/*(Complex String Problem - C/C++) Write a C function that takes a C-style string and
removes all occurrences of a given character from it, modifying the string in place.*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str1;
    char remove;
    cout << "enter a string " << endl;
    cin >> str1;
    cout << "enter character to remove " << endl;
    cin >> remove;
    //int n = str1.length();

    for(int i=0;i<str1.length(); ){
        if(remove == str1[i]){
            str1.erase(i,1);
        }
        else{
            i++;
        }
    }
    cout << str1;
    return 0;
}