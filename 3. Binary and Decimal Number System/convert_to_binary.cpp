#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, ans = 0, i = 0;
    cout << "Enter your number: ";
    cin >> n;

    while (n != 0)
    {

        int bit = n & 1;
        // to make the ans in reverse order
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans;
}