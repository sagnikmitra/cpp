#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    cin >> i >> j >> k;
    cout << (i > j ? (i > k ? i : k) : (j > k ? j : k));
    return 0;
}