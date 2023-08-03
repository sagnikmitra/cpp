#include <iostream>
using namespace std;

bool isPrime(int n) // this is Boolean Function which is defining whether a number is prime or not
{
    if (n <= 1)       // here, we are checking, if the number is below or less than 1, then anyway it is not a prime number
        return false; // hence, we are returning false here

    for (int i = 2; i <= n / 2; i++) // here, we are looping throwing the number from 2, we are going to n/2 instead of n, because between n/2 and n there can't be any divisor of a number
        if (n % i == 0)              // if we are finding any intermediate divisors
            return false;            // then we are returning false, as that won't be a prime number then

    return true; // if none of other above checks fails, that means the number is definitely a prime number hence, we are returning true, remember, if we return false or true at any stage, then the program break there itself.
}

int main()
{
    // rest of the program is self explanatory
    int num, i, prime = 0;
    cout << "Enter a number: ";
    cin >> num;
    if (isPrime(num))
        cout << "It is a Prime Number";
    else
        cout << "It is not a Prime Number";
    return 0;
}