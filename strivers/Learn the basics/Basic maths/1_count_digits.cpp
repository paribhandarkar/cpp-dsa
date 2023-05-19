/* 
link - https://practice.geeksforgeeks.org/problems/count-digits5716/1
Given a number N. Count the number of digits in N which evenly divides N.
Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.

Example 1:

Input:
N = 12
Output:
2
Explanation:
1, 2 both divide 12 evenly

Example 2:

Input:
N = 23
Output
0
Explanation:
2 and 3, none of them
divide 23 evenly */

#include <iostream>
using namespace std;

int evenlyDivides(int N)
{
    int count = 0;
    int main_number = N;
    while (N > 0)
    {
        int last_digit = N % 10;
        if (last_digit == 0)
        {
            N = N / 10;
            continue;
        }
        if (main_number % last_digit == 0)
        {
            count++;
        }
        N = N / 10;
    }
    return count;
}

int main()
{

    int t;
    cout << "enter a number: ";
    cin >> t;

    cout << evenlyDivides(t);

    return 0;
}