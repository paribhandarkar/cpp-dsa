#include <iostream>
using namespace std;

int main()
{

    int length, width;
    cout << "enter the length and width of the rectangle: ";
    cin >> length >> width;

    for (int i = 1; i <= length; i++)
    {
        if (i == 1 || i == length)
        {
            for (int j = 1; j <= width; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 1; j <= width; j++)
            {
                if (j == 1 || j == width)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}