#include <iostream>
using namespace std;

// function for checking even or odd -> type -> TSRS (take something return something)
bool checkEvenOdd(int num)
{
    // normal case
    if (num % 2 == 0)
        return true; // even

    return false; // odd
}

int main()
{
    int num;
    cout << "Enter your number: ";
    cin >> num;

    // edge case
    if (num == 0)
    {
        cout << "Neither even nor odd";
        return 0;
    }

    bool ans = checkEvenOdd(num);

    if (ans)
        cout << ">> Even number";
    else
        cout << ">> Odd number";
    return 0;
}