// https://leetcode.com/problems/palindrome-number/
// 9. Palindrome Number

// Given an integer x, return true if x is a palindrome, and false otherwise.

// Example 1:
// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.

// Example 2:
// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

// Example 3:
// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

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

bool isPalindrome(int n)
{
    if (reverse(n) == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int t;
    cout << "enter a number: ";
    cin >> t;

    cout << isPalindrome(t);

    return 0;
}
