/*

Given a number N. Count the number of digits in N which evenly divides N.

Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.
 

Example 1:

Input:
N = 12
Output:
2
Explanation:
1, 2 both divide 12 evenly


*/

#include<iostream>
using namespace std;

class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int num = N;
        int count = 0;
        
        while (N != 0) {
            int digit = N % 10;
            if(digit == 0) {
                N = N / 10;
                continue;
            }    
            if(num % digit == 0) count++;
            N = N / 10;
        }
        return count; 
    }
};