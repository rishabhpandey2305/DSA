// Brute Force Algo O(n^2)

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution
// {
// public:
//     int majorityElement(vector<int> &nums)
//     {
//         int size = nums.size();
//         int majority = 0;
//         for (int i : nums)
//         {
//             for (int j : nums)
//             {
//                 if (i == j)
//                 {
//                     majority++;
//                 }
//             }
//             if (majority > size / 2)
//             {
//                 return i;
//             }
//         }
//     }
// };

// int main()
// {
//     vector<int> nums = {3, 2, 2, 2, 2, 2, 3};
//     Solution solution;
//     cout << solution.majorityElement(nums);
//     return 0;
// }

// Optimize Method O(nlogn)

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution
// {
// public:
//     int majorityElement(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end());
//         int frequency = 1;
//         int ans = nums[0];
//         int size = nums.size();
//         for (int i = 1; i < size; i++)
//         {
//             if (nums[i] == nums[i - 1])
//             {
//                 frequency++;
//             }
//             else
//             {
//                 frequency = 1;
//                 ans = nums[i];
//             }
//             if (frequency > size / 2)
//             {
//                 return ans;
//             }
//         }
//         return ans;
//     }
// };

// int main()
// {
//     Solution solution;
//     vector<int> nums = {3, 2, 3};
//     cout << solution.majorityElement(nums);
//     return 0;
// }

// Moore's Voting Algo O(n)

#include <iostream>
#include <vector>
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int size = nums.size();
        int ans = 0;
        int frequency = 0;
        for (int i = 0; i < size; i++)
        {
            if (frequency == 0)
            {
                ans = nums[i];
            }
            if (ans == nums[i])
            {
                frequency++;
            }
            else
            {
                frequency--;
            }
        }
        return ans;
    }
};
using namespace std;
int main()
{
    Solution solution;
    vector<int> nums = {3, 2, 3};
    solution.majorityElement(nums);
    return 0;
}