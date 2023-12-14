#include<iostream>
using namespace std;

long long usingFormula(long long first) {
   long long second = first+1;
   return (first * second) / 2;
}

long long recursiveMethod(long long n, long long i ,long long sum) {
    // base condition
    if(i > n) return sum;
    sum += i;
    recursiveMethod(n, i+1, sum);
}

int main() {
    long long n;
    cin >> n;
    long long ans1 = recursiveMethod(n,1,0);
    long long ans2 = usingFormula(n);
    cout << "Ans from recursion: " << ans1 << endl << "Ans from formula : " << ans2;
    return 0;   
}