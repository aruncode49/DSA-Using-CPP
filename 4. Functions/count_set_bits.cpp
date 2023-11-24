#include <iostream>
using namespace std;

// calculate set bits
int calcSetBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1 == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int ans = calcSetBits(n);
    cout << "Total set bits = " << ans;
    return 0;
}