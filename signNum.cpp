#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    cin >> num;
    num > 0 ? cout << "Positive" : (num < 0 ? cout << "Negative" : cout << "Zero");
    return 0;
}