// Given a binary array and integers m, find position of zeroes flipping which creates maximum number of consecutive 1's in array.

// Input:   arr[] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1} m = 2 Output : 5 7
// Explanation:  We are allowed to flip maximum 2 zeroes.If we flip arr[5] and arr[7], we get 8 consecutive 1's which is maximum possible under given constraints

//  Input : arr[] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1} m = 1 Output : 7
// Explanation: We are allowed to flip maximum 1 zero. If we flip arr[7], we get 5 consecutive 1's which is maximum possible under given constraints.

#include <iostream>
using namespace std;

void findZeroes(int n, int m, int arr[])
{
    int zeroCount = 0, bestWindow = 0, bestL = 0, wR = 0, wL = 0;

    while (wR < n)
    {
        if (zeroCount <= m)
        {
            if (arr[wR] == 0)
            {
                zeroCount++;
            }
            wR++;
        }

        if (zeroCount > m)
        {
            if (arr[wL] == 0)
            {
                zeroCount--;
            }
            wL++;
        }

        if ((wR - wL > bestWindow) && (zeroCount <= m))
        {
            bestWindow = wR - wL;
            bestL = wL;
        }
    }

    for (int i = 0; i < bestWindow; i++)
    {
        if (arr[bestL + i] == 0)
        {
            cout << bestL + i << " " << endl;
        }
    }
}

int main()
{
    int n = 11;
    int arr[n] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1};
    int m = 2;

    findZeroes(n, m, arr);

    return 0;
}
