#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        // initialize ans vector array
        vector <int> ans;

        // sort array
        sort(arr.begin(), arr.end());

        int i = 0;
        while( i < arr.size()) {
            int count = 1;
            for(int j = i + 1; j < arr.size(); j++) {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }
            ans.push_back(count);   // store count in ans
            i = i + count;  // increase i
        }
        
        // sort ans
        sort(ans.begin(), ans.end());
        i =0;
        while( i < ans.size()-1) {
            if(ans[i] == ans[i+1]) 
                return false;
            i++;
        }
        return true;       
    }
};