#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the size of array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter the value: ";
        cin >> arr[i];
    }

    int i, j;

    for (i = 1; i < n; i++)
    {
        int var = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > var)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = var;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}