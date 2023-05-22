// link - https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1
// Armstrong Numbers

// For a given 3 digit number, find whether it is armstrong number or not. An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. Return "Yes" if it is a armstrong number else return "No".
// NOTE: 371 is an Armstrong number since 33 + 73 + 13 = 371

// Example 1:
// Input: N = 153
// Output: "Yes"
// Explanation: 153 is an Armstrong number
// since 13 + 53 + 33 = 153.
// Hence answer is "Yes".

// Example 2:
// Input: N = 370
// Output: "Yes"
// Explanation: 370 is an Armstrong number
// since 33 + 73 + 03 = 370.
// Hence answer is "Yes".

#include <iostream>
#include <cmath>
using namespace std;

string armstrongNumber(int n)
{
    int length = log10(n) + 1;
    int arm_no = 0;
    int num = n;

    while (n > 0)
    {
        int last_digit = n % 10;
        arm_no = arm_no + pow(last_digit, length);
        cout<<arm_no<<endl;
        n /= 10;
    }

    cout << arm_no;

    if (arm_no == num)
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

    cout << armstrongNumber(t);

    return 0;
}