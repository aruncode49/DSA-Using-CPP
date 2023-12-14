/* using loop -> O(N)
vector<int> reverseArray(int n, vector<int> &arr) {
    // Write your code here.
    int first = 0;
    int last = arr.size() - 1;

    while (first <= last) {
        swap(arr[first], arr[last]);
        first++;
        last--;
    }
    return arr;
} */

// using recurison
void reverse (vector<int> &arr, int first, int last){
   if(first > last) return;
   swap(arr[first], arr[last]);
   reverse(arr, first+1, last-1);
}

vector<int> reverseArray(int n, vector<int> &arr)
{
    // Write your code here.
    int first = 0;
    int last = arr.size() - 1;

    reverse(arr, first, last);
    return arr;
}