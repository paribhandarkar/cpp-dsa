#include <iostream>
using namespace std;

int findFactorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }

    return num * findFactorial(num - 1);
}

int main()
{

    int n, r;
    cout << "enter the value of n and r: ";
    cin >> n >> r;

    cout << "The value of nCr is equal to: " << findFactorial(n) / (findFactorial(n - r) * findFactorial(r));

    return 0;
}