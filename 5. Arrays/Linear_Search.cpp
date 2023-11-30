#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key) {   // searching all the element
   for (int i = 0; i < size; i++) {
    if(key == arr[i])
        return true;
   } 
   return false;
}

int main() {

    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    int key;
    cout << "Enter key: ";
    cin >> key;

    bool found = linearSearch(arr, 10, key);
    if(found)
        cout << "Key is present";
    else 
        cout << "Key is not present";

}