#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int num = n;
		    int revN = 0;
		    while(n > 0) {
		        int ld = n % 10; 
		        revN = (revN * 10) + ld;
		        n /= 10;
		    }
		    
		    if(num == revN) return "Yes";
		    return "No";
		    
		}
};