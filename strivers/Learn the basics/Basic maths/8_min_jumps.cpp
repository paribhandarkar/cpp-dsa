#include <iostream>
using namespace std;

// int minJumps(int arr[], int n)
// {
//     int jump = arr[0];
//     int count = 0;
//     while (jump < n && jump >= 0)
//     {
//         // int pointer = arr[jump];
//         jump = arr[jump];
//         cout << "jump is " << jump;
//         cout << "count is " << count;
//         count++;
//     }
//     return count;
// }

int minJumps(int arr[], int n)
{
    if (arr[0] >= n)
    {
        return 0;
    }

    int jump = arr[0];
    int count = 1; // Start with 1 jump already taken

    while (jump < n - 1) // Updated condition
    {
        if (arr[jump] == 0) // Handle the case when the jump value is 0, preventing further progress
        {
            return -1;
        }

        int maxReach = 0;
        int maxIndex = 0;
        for (int i = jump + 1; i <= jump + arr[jump] && i < n; i++) // Find the maximum reach from the current jump position
        {
            if (i + arr[i] > maxReach)
            {
                maxReach = i + arr[i];
                maxIndex = i;
            }
        }

        jump = maxIndex;
        count++;
    }

    return count;
}

int main()
{
    int arrr[6] = {1, 4, 3, 2, 6, 7};
    int nn = 6;
    cout << minJumps(arrr, nn);

    return 0;
}