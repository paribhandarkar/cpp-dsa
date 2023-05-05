#include <iostream>
using namespace std;

bool checkPythagorian(int a, int b, int c)
{
    int max_no = max(max(a, b), c);

    if (max_no == a)
    {
        return ((max_no * max_no) == (b * b) + (c * c));
    }
    else if (max_no == b)
    {
        return ((max_no * max_no) == (a * a) + (c * c));
    }
    else
    {
        return ((max_no * max_no) == (a * a) + (b * b));
    }
}

int main()
{
    int a, b, c;
    cout << "enter 3 numbers: ";
    cin >> a >> b >> c;

    if (checkPythagorian(a, b, c))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}