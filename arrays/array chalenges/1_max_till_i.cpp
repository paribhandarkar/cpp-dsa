// question
// given an array a[] of size n. for every i from 0 to n-1 output max(a[0], a[1], .... a[i])

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

    int mx = -19999;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << " ";
    }

    return 0;
}