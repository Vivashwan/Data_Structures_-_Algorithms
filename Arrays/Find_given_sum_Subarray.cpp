// Given an unsorted array of non-negative integers.
// Find if there is a sub-array with given sum.

// Input: arr[] = {1, 4, 20, 3, 10, 5} Sum = 33 Output: Yes
// Input: arr[] = {1, 4, 0, 0, 3, 10, 5} Sum = 7 Output: Yes

#include <iostream>
using namespace std;

bool givenSumSubarray(int arr[], int n, int sum)
{
    int currSum = arr[0], start = 0;

    for (int end = 1; end < n; end++)
    {
        while (start < end && currSum > sum)
        {
            currSum -= arr[start];
            start++;
        }

        if (currSum == sum)
        {
            return true;
        }
        if (end < n)
        {
            currSum += arr[end];
        }
    }
    return currSum == sum;
}

int main()
{
    int arr[] = {1, 4, 0, 0, 3, 10, 5};
    int sum = 7;

    int n = sizeof arr / sizeof arr[0];

    if (givenSumSubarray(arr, n, sum))
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;

    return 0;
}