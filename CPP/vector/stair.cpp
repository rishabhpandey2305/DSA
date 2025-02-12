#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        int n1 = 1;
        int n2 = 2;
        int temp = 0;
        if (n == 1)
        {
            return 1;
        }
        if (n == 2)
        {
            return 2;   
        }
        for (int i = 2; i < n; i++)
        {
            temp = n1 + n2;
            n1 = n2;
            n2 = temp;
        }
        return temp;
    }
};

int main()
{
    Solution solution = Solution();
    cout << solution.climbStairs(3);
    return 0;
}