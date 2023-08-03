#include <iostream>
using namespace std;
int main()
{
    int fibIn = 0, res = 1;
    cin >> fibIn;
    while (fibIn > 0)
    {
        res *= fibIn;
        fibIn--;
    }
    cout << res;
    return 0;
}