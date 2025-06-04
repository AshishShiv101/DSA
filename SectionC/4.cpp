#include <iostream>
using namespace std;

void testStatic()
{
    static int counter = 0;
    counter++;
    cout << "Static counter: " << counter << endl;
}

void testLocal()
{
    int counter = 0;
    counter++;
    cout << "Local counter: " << counter << endl;
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        testStatic();
        testLocal();
    }
    return 0;
}
