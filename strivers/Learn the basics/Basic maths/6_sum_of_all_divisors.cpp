// link - https://practice.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

// Sum of all divisors from 1 to n
// Given a positive integer N., The task is to find the value of    \sum_{i=1}^{i=n} F(i)  where function F(i) for the number i be defined as the sum of all divisors of ‘i‘.

// Example 1:
// Input:
// N = 4
// Output:
// 15
// Explanation:
// F(1) = 1
// F(2) = 1 + 2 = 3
// F(3) = 1 + 3 = 4
// F(4) = 1 + 2 + 4 = 7
// ans = F(1) + F(2) + F(3) + F(4)
//     = 1 + 3 + 4 + 7
//     = 15

// Example 2:
// Input:
// N = 5
// Output:
// 21
// Explanation:
// F(1) = 1
// F(2) = 1 + 2 = 3
// F(3) = 1 + 3 = 4
// F(4) = 1 + 2 + 4 = 7
// F(5) = 1 + 5 = 6
// ans = F(1) + F(2) + F(3) + F(4) + F(5)
//     = 1 + 3 + 4 + 7 + 6
//     = 21

#include <iostream>
#include <cmath>
using namespace std;

long long sumOfDivisors(int N)
{
    long long f = 0;
    for (int i = 1; i <= N; i++)
    {
        f += (N / i) * i;
    }
    return f;
}

int main()
{

    int t;
    cout << "enter a number: ";
    cin >> t;
    cout << sumOfDivisors(t);

    return 0;
}