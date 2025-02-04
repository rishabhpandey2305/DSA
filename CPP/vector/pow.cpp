#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    double myPow(double x, int n)
    {
        int neg = n;
        double mul = 1;
        int size = 0;
        if (n < 0)
        {
            size = n - (n * 2);
        }
        else
        {
            size = n;
        }
        for (int i = 0; i < size; i++)
        {
            if (neg < 0)
            {
                mul *= (1 / x);
            }
            else
            {
                mul *= x;
            }
        }
        return mul;
    }
};

int main()
{
    Solution solution;
    cout << solution.myPow(2.00000, -2);
    return 0;
}