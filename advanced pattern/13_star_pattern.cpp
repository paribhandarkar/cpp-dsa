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
            cout << "*";
        }
        for (int l = 2; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << "*";
        }
        for (int l = 2; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}