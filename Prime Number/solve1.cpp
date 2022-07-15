#include <iostream>
using namespace std;

bool isPrime (int n)
{
    if (n <= 1)
        return false;
    
    for (int i = 2; i < n; ++i) {
        if (n % i == 0)
            return false;        
    }
    return true;
}

int main()
{
    cout << isPrime(9) << endl;
    cout << isPrime(100) << endl;
    cout << isPrime(7) << endl;
    cout << isPrime(2) << endl;
    cout << isPrime(1) << endl;
    // 1 for true
    // 0 for false
    return 0;
}