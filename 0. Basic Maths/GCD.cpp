class Solution {
	public:
    int gcd(int a, int b) { 
	    // code here
	    // Using Euclidean Algorithm
	    while ( a > 0 && b > 0) {
	        if(a > b) a = a % b;   // or a = a - b;
	        else b = b % a;        // or b = b - a;
	    }
	    if (a == 0) return b;
	    else return a;    
	} 
};