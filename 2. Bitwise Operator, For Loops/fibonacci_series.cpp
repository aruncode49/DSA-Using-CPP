#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter size of fib series: ";
    cin >> n;

    int a = 0, b = 1;

    for (int i = 1; i <= n; i++)
    {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
}
