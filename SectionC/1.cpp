#include <iostream>
using namespace std;

int factorial(int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}

int main()
{
    cout << "Factorial of 5 is " << factorial(5) << endl;
    cout << "Factorial of 0 is " << factorial(0) << endl;
    cout << "Factorial of 7 is " << factorial(7) << endl;
    return 0;
}
