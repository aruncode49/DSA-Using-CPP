/*

Given an array of n integers. Find the minimum non-negative number to be inserted in array, so that sum of all elements of array becomes prime.

Input:
N=5
arr = {2, 4, 6, 8, 12}
Output:
5
Explanation:
The sum of the array is 32 ,we can add 5 to this to make it 37 which is a prime number.

*/

#include <iostream>
#include <math.h>
using namespace std;

bool checkPrime(int n)
{
    bool prime = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            prime = false;
    }
    return prime;
}

int minNumber(int arr[], int N)
{

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }

    if (sum == 1)
        return 1;

    int num = 0;
    while (!checkPrime(sum))
    {
        num++;
        sum++;
    }
    return num;
}

int main()
{
    int N = 7;
    int arr[] = {3, 7, 6, 8, 5, 1, 2};

    cout << minNumber(arr, N);

    return 0;
}