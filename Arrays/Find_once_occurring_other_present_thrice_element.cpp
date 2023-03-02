// Given an array where every element occurs three times, except one element which occurs only once.
// Find the element that occurs once. The expected time complexity is O(n) and O(1) extra space.

// Input: arr[] = {12, 1, 12, 3, 12, 1, 1, 2, 3, 3} Output : 2
// Explanation: In the given array all element appear three times except 2 which appears once.

// Input : arr[] = {10, 20, 10, 30, 10, 30, 30} Output : 20
// Explanation: In the given array all element appear three times except 20 which appears once.

#include <iostream>
using namespace std;

void getSingle(int arr[], int n)
{
    int ans = 0, sum;

    for (int i = 0; i < 32; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] & (1 << i))
            {
                sum++;
            }
        }

        if (sum % 3 != 0)
        {
            ans = ans | (1 << i);
        }
    }

    cout << ans << endl;
}

int main()
{
    int arr[] = {12, 1, 12, 3, 12, 1, 1, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    getSingle(arr, n);

    return 0;
}