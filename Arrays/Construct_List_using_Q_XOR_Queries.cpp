//  Given a list S that initially contains a single value 0. Below are the Q queries of the following types:
//  0 X : Insert X in the list 1 X : For every element A in S, replace it by A XOR X.
//  The task is to print all the element in the list in increasing order after performing the given Q queries.

//  Input: Q[][] = { {0, 6}, {0, 3}, {0, 2}, {1, 4}, {1, 5} } Output : 1 2 3 7
//  Explanation : [0](initial value) [0 6](add 6 to list) [0 6 3](add 3 to list) [0 6 3 2](add 2 to list) [4 2 7 6](XOR each element by 4) [1 7 2 3](XOR each element by 5) Thus sorted order after performing queries is[1 2 3 7]

//  Input : Q[][] = {{0, 2}, {1, 3}, {0, 5}} Output : 1 3 5
//  Explanation : [0](initial value) [0 2](add 2 to list) [3 1](XOR each element by 3) [3 1 5](add 5 to list) Thus sorted order after performing queries is[1 3 5]

#include <bits/stdc++.h>
using namespace std;
#define N 5
#define M 2

list<int> ConstructList(int arr[N][M])
{
    int xr = 0;

    list<int> ans;

    for (int i = N - 1; i > -0; i--)
    {
        if (arr[i][0] == 0)
        {
            ans.push_back(arr[i][1] ^ xr);
        }
        else
            xr = xr ^ arr[i][1];
    }

    ans.push_back(xr);

    ans.sort();

    return ans;
}

int main()
{
    int arr[N][M] = {{0, 6}, {0, 3}, {0, 2}, {1, 4}, {1, 5}};

    list<int> ans = ConstructList(arr);

    for (auto it = ans.begin(); it != ans.end(); ++it)
    {
        cout << ' ' << *it;
    }

    return 0;
}