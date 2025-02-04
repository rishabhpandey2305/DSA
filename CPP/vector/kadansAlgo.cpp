#include <iostream>
using namespace std;
int main()
{
    int size = 7;
    int maxSum = INT_MIN;
    int sum = 0;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        maxSum = max(sum, maxSum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << "Your Max sum is " << maxSum;
    return 0;
}