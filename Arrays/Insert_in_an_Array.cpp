// Insertion in an array

// Input: arr[] = {5, 10, 20, ....} x = 7 pos = 2
// Output: arr[] = {5, 7, 10, 20, ....}

// Input: arr[] = {5, 7, 10, 20 ....} x=3 pos = 2
// Output: arr[] = {5, 3, 7, 10, 20}

#include <iostream>
using namespace std;

void insertionInArray(int arr[], int n, int x, int pos)
{
    pos = pos - 1;

    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = x;
    n = n + 1;
}

int main()
{
    int arr[] = {5, 10, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7, pos = 2;
    insertionInArray(arr, n, x, pos);

    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}