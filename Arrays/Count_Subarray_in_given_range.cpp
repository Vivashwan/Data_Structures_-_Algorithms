// Given an array of N elements and L and R, print the number of sub-arrays such that the value of the maximum array element in that subarray is at least L and at most R.

// Input : arr[] = {2, 0, 11, 3, 0} L = 1, R = 10 Output : 4
// Explanation : the sub - arrays{2}, {2, 0}, {3} and {3, 0} have maximum in range 1 - 10.

#include <iostream>
using namespace std;

long countSubarrays(long n)
{
    return (n * (n + 1)) / 2;
}

void countSubarraysinGivenRange(int n, int arr[], int L, int R)
{
    int res = 0;

    int exe = 0, inc = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < L)
        {
            exe++, inc++;
        }

        else if (arr[i] > R)
        {
            res += countSubarrays(inc) - countSubarrays(exe);
            exe = 0, inc = 0;
        }

        else
        {
            res -= countSubarrays(exe);
            inc++;
        }
    }

    res += countSubarrays(inc) - countSubarrays(exe);

    cout << res << endl;
}

int main()
{
    int arr[] = {2, 0, 11, 3, 0};
    int L = 1, R = 10;

    int n = sizeof(arr) / sizeof(arr[0]);

    countSubarraysinGivenRange(n, arr, L, R);

    return 0;
}
