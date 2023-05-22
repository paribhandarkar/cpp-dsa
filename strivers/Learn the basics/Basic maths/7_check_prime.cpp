#include <iostream>
using namespace std;

void checkPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n == 2)
        {
            cout << "true";
            return;
        }
        if (n == 1)
        {
            cout << "false";
            return;
        }
        if (n % i == 0)
        {
            cout << "false";
            return;
        }
    }
    cout << "true";
}

int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;

    checkPrime(num);
}
