#include<iostream>
using namespace std;

/**
 * Time Complexity: O(n)
 * Space Complexity: O(n) -> due to stack space
*/

void printCountingInReverseOrder(int n) {
    if(n >= 1) cout << n << " ";
    else return;
    printCountingInReverseOrder(n-1);
}

int main() {
    int n;
    cin >> n;
    printCountingInReverseOrder(n);
    return 0;
}