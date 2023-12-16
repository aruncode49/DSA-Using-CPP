#include<iostream>
#include<map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }

    // we can iterate over map
    for(auto it : mp) {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cin >> q;
    while(q--) {
        int num;
        cin >> num;
        // fetch
        cout << mp[num] << endl;
    }
    return 0;
}