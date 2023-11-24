#include <iostream>
using namespace std;

// factorial
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = i * fact;
    }

    return fact;
}

// nCr
int nCr(int n, int r)
{
    return (fact(n) / (fact(r) * fact(n - r)));
}

int main()
{
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;

    cout << "Ans = " << nCr(n, r);
    return 0;
}