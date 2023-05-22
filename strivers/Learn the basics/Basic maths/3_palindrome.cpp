// link - https://practice.geeksforgeeks.org/problems/palindrome0746/1
// Palindrome
// Given an integer, check whether it is a palindrome or not.

// Example 1:

// Input: n = 555
// Output: Yes

// Example 2:

// Input: n = 123
// Output: No

#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int reversed_no = 0;

    while (x > 0)
    {
        int last_digit = x % 10;
        reversed_no = (reversed_no * 10) + last_digit;
        x /= 10;
    }
    return reversed_no;
}

string is_palindrome(int n)
{
    if (reverse(n) == n)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{

    int t;
    cout << "enter a number: ";
    cin >> t;

    cout << is_palindrome(t);

    return 0;
}
