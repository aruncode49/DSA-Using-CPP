#include<iostream>
using namespace std;

int findMax(int arr[], int size) {
    if(size > 0) {
        int max = arr[0];
        for(int i = 1; i < size; i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    } else {
        return 0;
    }
}

int findMin(int arr[], int size) {
    if(size > 0) {
        int min = arr[0];
        for(int i = 1; i < size; i++) {
            if(arr[i] < min) {
                min = arr[i];
            }
        }
        return min;
    } else {
        return 0;
    }
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

    int max = findMax(arr, size);
    int min = findMin(arr, size);

    cout << "Max element = " << max << " and Min element = " << min;


    return 0;
}