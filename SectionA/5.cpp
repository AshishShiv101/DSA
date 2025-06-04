#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, sum = 0;
    cout << "Enter value of n: ";
    cin >> n;

    while (i <= n)
    {
        sum += i;
        i += 2;
    }

    cout << "Sum of odd numbers from 1 to " << n << " is " << sum << endl;
    return 0;
}
