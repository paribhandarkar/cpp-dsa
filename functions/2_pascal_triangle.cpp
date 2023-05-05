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

int find_nCr(int n, int r)
{
    return findFactorial(n) / (findFactorial(n - r) * findFactorial(r));
}

int main()
{

    int num;
    cout << "enter a value: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << find_nCr(i, j) << " ";
        }
        cout << endl;
    }

    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1

    return 0;
}