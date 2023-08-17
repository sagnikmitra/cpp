#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int totalSum = 0;
    for (int i = 0; i < size; i++)
    {
        int subArraySum = 0;
        for (int j = i; j < size; j++)
        {
            subArraySum += arr[j];
            totalSum += subArraySum;
        }
    }
    cout << totalSum;
    return 0;
}