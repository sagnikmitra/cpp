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
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}