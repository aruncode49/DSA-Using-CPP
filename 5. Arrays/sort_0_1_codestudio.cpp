#include <bits/stdc++.h>
using namespace std;

void sortZeroesAndOne(int arr[], int size)
{
    //Write your code here
    int i = 0; 
    int j = size-1;

    while( i < j) {
        if(arr[i] ==0 && i < j) i++;
        if(arr[j] == 1 && i <j) j--;
        if(arr[i] == 1 && arr[j] == 0 && i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}