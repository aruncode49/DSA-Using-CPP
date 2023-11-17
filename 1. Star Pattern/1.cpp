/*

1
2 3
3 4 5
4 5 6 7

*/

// method-1 -> using value variable

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         int value = i;
//         for (int j = 1; j <= n; j++)
//         {
//             if (j <= i)
//             {
//                 cout << value << " ";
//                 value++;
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }

// method - 2 -> without using value variable

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                cout << i + j - 1 << " ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
