#include<bits/stdc++.h>
using namespace std;

void printFib(int n, int f, int s, vector <int> &ans) {
    if(n > 0) {
        int num = f+s;
        ans.push_back(num);
        f= s;
        s = num;
        printFib(n-1, f, s, ans);
    }
    return;
}

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    int f = -1;
    int s = 1;
    vector <int> ans;
    printFib(n, f, s, ans);
    return ans;
}