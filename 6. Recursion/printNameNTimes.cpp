#include <iostream>
using namespace std;

// print name 5 times using recursion
void printName(int i, int n) {
  
  // base condition
  if( i <= n) {
    cout << "Arun Kumar" << endl;
  } else {
    return;
  }

  // recursive call
  printName(i + 1, n);
}


int main() {
  int n;
  cin >> n;
  printName(1, n);
  return 0;
}