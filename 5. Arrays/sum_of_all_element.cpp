#include<iostream>
using namespace std;

int sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

void takeInput(int arr[], int size) {
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int main()
{
    int arr[50];
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    // take input in array
    takeInput(arr, size);

    int ans = sum(arr,size);
    cout << "Ans = " << ans;

    return 0;
}