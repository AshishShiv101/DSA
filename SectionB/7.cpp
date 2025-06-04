#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    *p = 42;
    cout << "Value: " << *p << endl;
    delete p; // Free the memory
    return 0;
}
