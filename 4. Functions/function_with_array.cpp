#include <iostream>
using namespace std;

// print array
void display_array(int arr[], int size)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// input array
void take_input(int arr[], int size) {
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}


int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    // taking input
    take_input(arr, size);

    // print array
    display_array(arr, size);

    return 0;
}