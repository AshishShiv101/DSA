#include <iostream>
using namespace std;

int main()
{
    int x = 5;

    cout << "Using while loop:" << endl;
    while (x < 5)
    {
        cout << "This won't print because condition is false." << endl;
    }

    cout << "Using do-while loop:" << endl;
    do
    {
        cout << "This will print at least once even if condition is false." << endl;
    } while (x < 5);

    return 0;
}
