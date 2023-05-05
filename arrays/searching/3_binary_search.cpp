#include <iostream>
using namespace std;

// 12, 23, 34, 45, 56

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return -1;
}

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

    int key;
    cout << "enter the value which you want to search: ";
    cin >> key;

    cout << "the position of the value in array is: " << binarySearch(arr, n, key);

    return 0;
}