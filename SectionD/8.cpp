/*(Complex String Problem - C/C++) Write a C function to check if two C-style strings
are anagrams of each other (i.e., they contain the same characters with the same
frequencies).*/

#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram( string &str1, string &str2){
sort(str1.begin(), str1.end());
sort(str2.begin(), str2.end());

return str1==str2;
}


int main() {
    string str1 = "abcd";
    string str2 = "dabc";
cout << (isAnagram(str1, str2)? "true": "false") <<endl;
return 0;}