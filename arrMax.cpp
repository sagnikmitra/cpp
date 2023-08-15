// C++ program to find maximum in arr[] of size n
#include <bits/stdc++.h>
using namespace std;

// Returns maximum in arr[] of size n
int largest(int arr[], int n)
{
    return *max_element(arr, arr + n);
}

// Driver code
int main()
{
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function call
    cout << largest(arr, n);
    return 0;
}
