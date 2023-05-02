#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = n - i; k >= 1; k--)
        {
            for (int count = 1; count <= 2; count++)
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = n - i; k >= 1; k--)
        {
            for (int count = 1; count <= 2; count++)
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}