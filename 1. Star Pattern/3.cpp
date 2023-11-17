/*

A A A
B B B
C C C

*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     char x = 'A';
//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= n; j++)
//         {
//             cout << x << " ";
//         }
//         cout << endl;
//         x++;
//     }
//     return 0;
// }

// -------------------------------------------------------

/*

A B C
A B C
A B C

*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         char x = 'A';
//         for (int j = 1; j <= n; j++)
//         {
//             cout << x << " ";
//             x++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// -------------------------------------------------------

/*

A B C
D E F
G H I

*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     char x = 'A';
//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= n; j++)
//         {
//             cout << x << " ";
//             x++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// -------------------------------------------------------

/*

A B C
B C D
C D E

*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         char x = 'A' + i - 1;
//         for (int j = 1; j <= n; j++)
//         {
//             cout << x << " ";
//             x++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// -------------------------------------------------------

/*

A
B B
C C C

*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//            cout << (char)('A' + i - 1) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// -------------------------------------------------------

/*

A
B C
D E F
G H I J

*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     char ch = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//                 cout << ch << " ";
//                 ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// -------------------------------------------------------

/*

A
B C
C D E
D E F G

*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         char ch = 'A' + i - 1;
//         for (int j = 1; j <= i; j++)
//         {
//                cout << ch << " ";
//                ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// -------------------------------------------------------

/*

D
C D
B C D
A B C D

*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         char ch = 'A' + n - i;
//         for (int j = 1; j <= i; j++)
//         {
//                cout << ch << " ";
//                ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// -------------------------------------------------------

/*

   *
  **
 ***
****

*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (j >= n+1 - i && j <= n)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// -------------------------------------------------------

/*

****
***
**
*

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}
