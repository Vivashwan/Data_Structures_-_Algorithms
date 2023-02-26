// Equilibrium index of an array i.e print index whose left element sum is equal to right element's sum.

#include <iostream>
using namespace std;

void equilibriumIndex(int arr[], int n)
{
    int mid = n / 2;
    int leftSum = 0, rightSum = 0;

    for (int i = 0; i < mid; i++)
    {
        leftSum += arr[i];
    }

    for (int i = n - 1; i > mid; i--)
    {
        rightSum += arr[i];
    }

    if (rightSum > leftSum)
    {
        while (rightSum > leftSum && mid < n - 1)
        {
            rightSum -= arr[mid + 1];
            leftSum += arr[mid];
            mid++;
        }
    }

    else if (leftSum > rightSum)
    {
        while (leftSum > rightSum && mid > 0)
        {
            leftSum -= arr[mid - 1];
            rightSum += arr[mid];
            mid--;
        }
    }

    if (leftSum == rightSum)
    {
        cout << "The equilibrium point of this array is ", mid;
    }

    else
        cout << "-1";
}

int main()
{
    int n = 6;

    int arr[n] = {8, 5, 4, 3, 2, 1};

    equilibriumIndex(arr, n);

    return 0;
}