#include<iostream>
using namespace std;

void printLinearly(int i, int n) {

    // base condition
    if( i <= n ) {
        cout << i << " ";
    } else {
        return;
    }
    
    // recursive call
    printLinearly(i+1, n);
}

int main() {
    int n;
    cin >> n;
    
    printLinearly(1, n);
    return 0;
}