#include <iostream>
using namespace std;

bool isPrime (int n)
{
    for (int i = 2; i < n; ++i) {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << isPrime(9) << endl;
    return 0;
}