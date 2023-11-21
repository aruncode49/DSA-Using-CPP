#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, ans = 0, i = 0;
    cin >> n;

    while (n != 0)
    {

        // step 1: find last digit
        int digit = n % 10;

        // step 2: consider calc if digit is 1
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }

        // step 3: increase i and decrease n
        i++;
        n = n / 10;
    }

    cout << "Ans is " << ans;

    return 0;
}