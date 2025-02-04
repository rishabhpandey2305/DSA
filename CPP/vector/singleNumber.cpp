#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int sum = 0;
        for (int i : nums)
        {
            sum = sum ^ i;
        }
        return sum;
    }
};
int main()
{
    vector<int> nums = {1, 2, 1, 4, 4, 5, 5};
    Solution s;
    cout << s.singleNumber(nums);
    return 0;
}