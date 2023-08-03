#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter the length of fibonacci series you wanna print: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; ++i) cout << round(pow(((1 + sqrt(5)) / 2), i) / sqrt(5)) << " ";
    return 0;
}