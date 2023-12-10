#include<iostream>
using namespace std;

void printNumber(int i, int n) {
    if(i <= n) printNumber(i+1, n); // backtracking
    else return;
    cout << i << " ";   
}

int main() {
    int n;
    cin >> n;
    printNumber(1, n);
    return 0;
}