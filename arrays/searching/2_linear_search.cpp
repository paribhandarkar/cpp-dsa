#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
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

    cout << "the position of the value in array is: " << linearSearch(arr, n, key);

    return 0;
}