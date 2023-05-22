/*
link - https://leetcode.com/problems/reverse-integer/description/
Reverse Integer
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:
Input: x = 123
Output: 321

Example 2:
Input: x = -123
Output: -321

Example 3:
Input: x = 120
Output: 21

Constraints:
-231 <= x <= 231 - 1 */

#include <bits/stdc++.h>

using namespace std;

// int reverse(int x)
// {
//     string reverse_no = "";
//     long long int num;

//     if (x < 0)
//     {
//         num = abs(x);
//     }
//     else if (x == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         num = x;
//     }

//     while (num > 0)
//     {
//         int last_digit = num % 10;
//         reverse_no = reverse_no + to_string(last_digit);

//         num = num / 10;
//     }

//     if (x < 0)
//     {
//         return stoi(reverse_no) * (-1);
//     }
//     else
//     {
//         return stoi(reverse_no);
//     }
// }

int reverse(int x)
{
    long long int reversed_no = 0;
    int num;
    if (x < 0)
    {
        num = abs(x);
    }
    else if (x > 0)
    {
        num = x;
    }
    else
    {
        return 0;
    }

    while (num > 0)
    {
        int last_digit = num % 10;
        reversed_no = (reversed_no * 10) + last_digit;
        num /= 10;
    }

    if (reversed_no > INT_MAX || reversed_no < INT_MIN)
    {
        return 0;
    }

    if (x < 0)
    {
        return reversed_no * (-1);
    }

    return reversed_no;
}

int main()
{

    int t;
    cout << "enter a number: ";
    cin >> t;

    cout << reverse(t);

    return 0;
}