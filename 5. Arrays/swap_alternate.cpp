#include <iostream>
using namespace std;

void swap_alternate(int arr[], int size)
{
    int start = 0;
    while (start + 1 < size)
    {
        swap(arr[start], arr[start + 1]);
        start += 2;
    }
}

void printArray(int arr[], int size)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void takeInput(int arr[], int size)
{
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++)
    {
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

    // swap alternate values
    swap_alternate(arr, size);

    // printing the array
    printArray(arr, size);

    return 0;
}