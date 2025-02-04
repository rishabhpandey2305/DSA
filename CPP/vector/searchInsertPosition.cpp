#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int end = nums.back();
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {   
            if (nums[i] == target)
            {
                ans = i;
                break;
            }
            if (nums[i] > target)
            {
                ans = i;
                break;
            }   
            if (end == nums[i])
            {
                if (end < target)
                {
                    ans = i + 1;
                    break;
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution Solution;
    vector<int> nums = {1, 2, 3, 5, 6};
    cout << Solution.searchInsert(nums, 3);
    return 0;
}