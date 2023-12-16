#include<iostream>
#include<map>
using namespace std;

int main() {

    string s;
    cin >> s;

    map<char, int> mp;
    for (int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }

    // we can iterate over map
    for(auto it : mp) {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cin >> q;
    while(q--) {
        char ch;
        cin >> ch;
        // fetch
        cout << mp[ch] << endl;
    }
    return 0;
}