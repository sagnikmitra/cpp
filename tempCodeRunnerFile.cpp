#include <iostream>
using namespace std;
int main()
{
    int length = 0;
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            cout << "_";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*_";
        }
        cout << endl;
    }
    return 0;
}