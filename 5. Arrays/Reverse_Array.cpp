#include<iostream>
using namespace std;

void reverse(int arr[], int size) {
    int start = 0;
    int end = size-1;

    while( start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, -3};
    reverse(arr,10);
    printArray(arr,10);
    return 0;
}