#include <iostream>
using namespace std;

void byValue(int x)
{
    x = x + 10;
}

void byReference(int *x)
{
    *x = *x + 10;
}

int main()
{
    int a = 5, b = 5;
    byValue(a);
    byReference(&b);

    cout << "After byValue: a = " << a << endl;     // Still 5
    cout << "After byReference: b = " << b << endl; // Becomes 15
    return 0;
}
