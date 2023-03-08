// Largest element index in an array

// Input: arr[] = {10, 5, 20} Output: 2
// Input: arr[] = {40, 8, 50, 100} Output: 3

#include <iostream>
using namespace std;

void largestElementIndex(int arr[], int n)
{
    int i = 0, res = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    cout << res << endl;
}

int main()
{
    int arr[] = {40, 8, 50, 100};
    int n = sizeof(arr) / sizeof(arr[0]);

    largestElementIndex(arr, n);
    return 0;
}