// Frequencies in a sorted array.

// Input: arr[] = {10, 10, 10, 25, 30, 30} Output: 10 3 25 1 30 2
// Input: arr[] = {10, 10, 10, 10} Output: 10 4

#include <iostream>
using namespace std;

void printFrequencies(int arr[], int n)
{
    int freq = 1;
    int low = 1, high = n;
    while (low < high)
    {
        while (low < high && arr[low] == arr[low - 1])
        {
            freq++;
            low++;
        }

        cout << arr[low - 1] << " " << freq << endl;
        low++;
        freq = 1;
    }

    if (n == 1 || arr[high - 1] != arr[high - 2])
    {
        cout << arr[high - 1] << " " << 1;
    }
}

int main()
{
    int arr[] = {10, 10, 10, 25, 30, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    printFrequencies(arr, n);

    return 0;
}