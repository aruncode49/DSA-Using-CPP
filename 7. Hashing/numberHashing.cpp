#include<iostream>
using namespace std;

int main() {

    // size of array
    int n;
    cin >> n;

    // input in array
    int arr[n];
    for (int i = 0; i < n; i++) {   // 1 2 3 1 3
        cin >> arr[i];
    }

    // precount
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    cout << endl;

    // search hashing numbers 1 2 3 12 4
    cout << hash[1] << endl;
    cout << hash[2] << endl;
    cout << hash[3] << endl;
    cout << hash[12] << endl;
    cout << hash[4] << endl;

    return 0;
}