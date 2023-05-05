#include <iostream>
#include <cmath>
using namespace std;

int octalToDecimal(int num)
{
    int len = log10(num) + 1;
    int temp, decimal_no = 0;

    for (int i = 0; i < len; i++)
    {
        temp = num % 10;
        decimal_no = decimal_no + temp * pow(8, i);
        num = num / 10;
    }

    return decimal_no;
}

int main()
{

    int n;
    cout << "enter an octal number: ";
    cin >> n;

    cout << octalToDecimal(n);

    return 0;
}