// Leaders in an array. Leaders are those elements whose right hand side element is smaller than them.
// Input: arr[] = {7, 10, 4, 6, 5, 2} Output: 10 6 5 2
// Input: arr[] = {10, 20, 30} Output: 30
// Input: arr[] = {30, 20, 10} Output: 10 20 30

#include <iostream>
using namespace std;

void printingLeaders(int arr[], int n)
{
    int leader = arr[n - 1];
    cout << leader << " ";

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > leader)
        {
            leader = arr[i];
            cout << leader << " ";
        }
    }
}

int main()
{
    int arr[] = {7, 10, 4, 6, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printingLeaders(arr, n);
    return 0;
}