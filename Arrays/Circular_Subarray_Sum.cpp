// Maximum that maximizes the sum of the value of i*arr[i], where i  varies from 0 to n-1.
// Input: arr[] = {8, 3, 1, 2} Output : 29
// Explanation : Lets look at all the rotations,
// {8, 3, 1, 2} = 8 * 0 + 3 * 1 + 1 * 2 + 2 * 3 = 11
// {3, 1, 2, 8} = 3 * 0 + 1 * 1 + 2 * 2 + 8 * 3 = 29
// {1, 2, 8, 3} = 1 * 0 + 2 * 1 + 8 * 2 + 3 * 3 = 27
// {2, 8, 3, 1} = 2 * 0 + 8 * 1 + 3 * 2 + 1 * 3 = 17

#include <iostream>
using namespace std;

int maximumSum(int arr[], int n)
{
    int res = 0, totalSum = 0, givenSum = 0, nextSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        givenSum += i * arr[i];
    }

    res = givenSum;

    for (int i = 1; i < n; i++)
    {
        nextSum = (givenSum - (totalSum - arr[i - 1])) + (arr[i - 1] * (n - 1));
        givenSum = nextSum;

        res = max(res, nextSum);
    }

    return res;
}

int main()
{
    int n = 4;

    int arr[n] = {8, 3, 1, 2};

    cout << maximumSum(arr, n);

    return 0;
}