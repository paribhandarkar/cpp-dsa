#include <iostream>
using namespace std;

int main()
{

    int length, width;
    cout << "enter the length and width of the rectangle: ";
    cin >> length >> width;

    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= width; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    // *****
    // *****
    // *****

    return 0;
}