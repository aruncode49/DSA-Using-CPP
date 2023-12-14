#include<bits/stdc++.h>
using namespace std;

// using recursion
bool checkPalindrome(string &str, int l, int r) {
    // base condition
    if(l <= r) {
       if(str[l] == str[r]) checkPalindrome(str, l+1, r-1);
       else return false; 
    } else {
        return true;
    }
}

int main() {
    string str = "a";
    int l = 0;
    int r = str.size()-1;
    bool ans = checkPalindrome(str, l, r);
    cout << ans;
}