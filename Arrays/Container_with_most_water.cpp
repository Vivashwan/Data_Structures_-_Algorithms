// Container with most water

#include <iostream>
using namespace std;

void maxArea(int arr[], int n)
{
    int res = 0;
    int l = 0;
    int r = n - 1;

    while (l < r)
    {
        res = max(res, min(arr[l], arr[r]) * (r - l));

        if (arr[l] > arr[r])
        {
            r--;
        }
        else
        {
            l++;
        }
    }

    cout << res << endl;
}

int main()
{
    int n = 5;
    int arr[n] = {5, 7, 5, 8, 9};

    maxArea(arr, n);

    return 0;
}