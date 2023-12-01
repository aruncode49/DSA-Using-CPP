#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &A, int n, vector<int> &B, int m)
{
    // Write your code here.
    int visited[m] = {0};

    vector<int> ans;

    // ++++++++++++ Brute force Approach ++++++++++++++
    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j < m; j++)
    //     {

    //         if (A[i] == B[j] && visited[j] == 0)
    //         {
    //             ans.push_back(A[i]);
    //             visited[j] = 1;
    //             break;
    //         }

    //         if (A[i] < B[j])
    //         {
    //             break;
    //         }
    //     }
    // }

    return ans;

    // ++++++++++++ Optimal Solution ++++++++++++
    // Write your code here.
	int i = 0;
	int j = 0;
	vector <int> ans;

	while (i < n && j < m) {
		if(A[i] < B[j]) i++;
		else if (B[j] < A[i]) j++;
		else {
			ans.push_back(A[i]);
			i++;
			j++;
		}
	}
	return ans;

}