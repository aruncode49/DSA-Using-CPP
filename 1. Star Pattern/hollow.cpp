#include<iostream>
using namespace std;

/*

*****
*   *
*   *
*   *
*****

*/

int printHollow(int n) {
    for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i != 1 && i != n && j >= 2 && j <= n - 1) cout << " ";
      else cout<< "*";
    }
    cout << endl;
  }
}

int main()
{
    printHollow(20);
    return 0;
}