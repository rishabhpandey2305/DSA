#include <iostream>
using namespace std;

class Solution
{
public:
    void myPow(double x, int n)
    {
        for (int i = 1; i < n; i++)
        {
            x *= 2;
        }
        cout << x;
    }
};

int main()
{
    Solution solution;
    solution.myPow(2, 10);
    return 0;
}