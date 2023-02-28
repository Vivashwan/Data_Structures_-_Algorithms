// Find the majority element in the given array.
// A majority element is an element which occurs more than [n/2] times in an array.

// (Moore's Voting Algorithm)

// Input: arr[] = {8, 3, 4, 8, 8} Output: 0 or 3 or 4
// Input: arr[] = {3, 7, 4, 7, 7, 5} Output: -1 (No majority)

#include <iostream>
using namespace std;

void findMajority(int arr[], int n)
{
    int res = 0, count = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }

        if (count <= n / 2)
        {
            res = -1;
        }
    }

    cout << res << endl;
}

int main()
{
    int arr[] = {8, 3, 4, 8, 8};
    int n = sizeof arr / sizeof arr[0];

    findMajority(arr, n);

    return 0;
}