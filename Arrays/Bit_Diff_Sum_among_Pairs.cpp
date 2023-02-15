// Given an integer array of n integers. Find sum of bit differences in all pairs that
// can be formed from array elements.

// Bit differences of pairs (x,y) is count of different bits at some positions in binary representations of x and y.

// Input : arr[] = {1, 2} Output : 4
// Explanations: All pairs in array are(1, 1), (1, 2)(2, 1), (2, 2)  Sum of bit differences = 0 + 2 + 2 + 0 = 4

// Input : arr[] = {1, 3, 5} Output : 8
// Explanations: All pairs in array are(1, 1), (1, 3), (1, 5)(3, 1), (3, 3)(3, 5), (5, 1), (5, 3), (5, 5) Sum of bit differences = 0 + 1 + 1 + 1 + 0 + 2 + 1 + 2 + 0 = 8

#include <iostream>
using namespace std;

void sumBitDifferences(int n, int arr[])
{
    int ans = 0;

    for (int i = 0; i < 32; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if ((arr[j] & (1 << i)))
            {
                count++;
            }
        }
        ans += (count * (n - count)) * 2;
    }
    cout << ans << endl;
}

int main()
{
    int arr[] = {1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    sumBitDifferences(n, arr);
    return 0;
}