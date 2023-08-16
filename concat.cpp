#include <bits/stdc++.h>
using namespace std;
void concat(int arr1[], int arr2[], int arrConcat[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
        arrConcat[i] = arr1[i];
    for (int i = 0; i < size2; i++)
        arrConcat[size1 + i] = arr2[i];
}
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    const int size1 = sizeof(arr1) / sizeof(arr1[0]);
    const int size2 = sizeof(arr2) / sizeof(arr2[0]);
    const int sizeConcat = size1 + size2;
    int arrConcat[sizeConcat] = {};
    concat(arr1, arr2, arrConcat, size1, size2);
    for (int i = 0; i < sizeConcat; i++)
        cout << arrConcat[i] << " ";
    return 0;
}
