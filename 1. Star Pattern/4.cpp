/*

      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int number = 0;
        for (int j = 1; j <= n + i - 1; j++)
        {

            if (j >= n - i + 1 && j <= n)
                cout << ++number;
            else if (j >= n + 1 && j <= n + i - 1)
                cout << --number;
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}