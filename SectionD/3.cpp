/*Write a C program to concatenate two C-style strings without using strcat(). Ensure
proper memory allocation if needed.
get length
allocate memory
combine in result use for loop*/
#include <iostream>
#include <cstring>
using namespace std;




int main(){
    char str1[100];
    char str2[100];

    cout << "enter a string " << endl;
    cin.getline(str1,100);
    cout << "enter the next string " << endl;
    cin.getline(str2,100);

    
    

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    char* result = new char[len1 + len2 + 1];  
     
    for(int i =0; i<len1; ++i){
        result[i] = str1[i];
    }
    for(int i=0; i<len2; ++i){
        result[len1 + i] = str2[i];
    }

    result[len1 + len2] = '\0';

    
    cout << result << endl;
    delete[] result;
    return 0;
}