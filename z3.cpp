//Fib numbers

#include <iostream>
using namespace std;

int main()
{
    cout << "Type a number (belongs to N): ";
    int number = 0;
    cin >> number;

    if (number < 0)
    {
        cout << endl << "Error!";
        return;
    }

    return 0;
}