#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n;
    cout << "enter the array size: ";
    cin >> n;

    int arrayOfNum[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter a value: ";
        cin >> arrayOfNum[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (maxNo < arrayOfNum[i])
        {
            maxNo = arrayOfNum[i];
        }
        if (minNo > arrayOfNum[i])
        {
            minNo = arrayOfNum[i];
        }
    }

    cout << maxNo << " " << minNo;

    return 0;
}