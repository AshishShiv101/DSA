#include <iostream>
using namespace std;

class FileHandler
{
public:
    FileHandler() { cout << "File opened\n"; }
    ~FileHandler() { cout << "File closed\n"; }
};

int main()
{
    {
        FileHandler fh; // Resource is acquired here
        cout << "Working with file...\n";
    } // Resource is automatically released here (destructor called)

    return 0;
}
