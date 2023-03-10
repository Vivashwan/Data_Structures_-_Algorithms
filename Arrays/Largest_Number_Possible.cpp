// Given an array of numbers, arrange them in such a way that they form the largest number possible.
// The result is going to be very large.

// Input: n=5, arr[]= {3, 30, 34, 5, 9}  Output: 9534330

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int myCompare(string x, string y)
{
    string xy = x.append(y);
    string yx = y.append(x);

    return xy.compare(yx) > 0 ? 1 : 0;
}

void printLargest(vector<string> arr)
{
    sort(arr.begin(), arr.end(), myCompare);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
}

int main()
{
    vector<string> arr = {"3", "30", "34", "5", "9"};

    printLargest(arr);

    return 0;
}