#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k;
        }
        for (int l = 2; l <= i; l++)
        {
            cout << l;
        }
        for (int j = n - 1; j >= i; j--)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;

    // ....1....
    // ...212...
    // ..32123..
    // .4321234.
    // 543212345
}