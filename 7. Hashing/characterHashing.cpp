#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "aabsrbads";
    // pre compute
    int hash[26] = {0};
    for(int i = 0; i<s.size(); i++) hash[s[i] - 'a']++; // 256 -> hash[s[i]];
    
    int q;
    cin >> q;
    while(q--) {
        char ch;
        cin >> ch;
        // fetch
        cout << hash[ch - 'a'] << endl; // 256 -> hash[ch];
    }
    return 0;
}