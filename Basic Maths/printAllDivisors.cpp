#include<bits/stdc++.h>
using namespace std;

// class Solution {
//   public:
//     void print_divisors(int n) {
//         // Code here.
//         for (int i = 1; i <= n/2; i++) {
//             if(n % i == 0) cout << i << " ";
//         }
//         cout << n;
//     }
// };

// optimize solution

class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        vector <int> v;
        
        for (int i = 1; i <= sqrt(n); i++) {
            if(n % i == 0) {
                v.push_back(i);
                if(n / i != i) v.push_back(n / i);
            }
        }
        
        // sort vector
        sort(v.begin(), v.end());
        for(auto it : v) cout << it << " ";
    }
};