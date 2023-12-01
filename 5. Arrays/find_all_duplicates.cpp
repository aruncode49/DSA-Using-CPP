#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        
        // initialize ans array
        vector <int> ans;

        sort(arr.begin(), arr.end());

        int i = 0;
        while (i < arr.size()-1) {
            if(arr[i] == arr[i+1]) {
                ans.push_back(arr[i]);
                i+=2;
            } else {
                i++;
            }
        }

        return ans;
    }
};