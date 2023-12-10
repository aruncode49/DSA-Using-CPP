// The question means that we have to print 1 to N using backtracking

#include<iostream>
using namespace std;

void printNumber(int n) {
    if(n >= 1) printNumber(n-1);
    else return;
    cout << n << " ";   // this is printed using backtracking
}

int main() {
    int n;
    cin >> n;
    printNumber(n);
    return 0;
}