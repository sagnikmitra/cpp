#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    const int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[size1] = {};
    for (int i = 0; i < size1; i++)
        arr2[i] = arr1[size1 - i - 1]; // this can be also written as arr2[i] = arr1[--size1]
    for (int i = 0; i < size1; i++)
        cout << arr2[i] << " ";
    return 0;
}