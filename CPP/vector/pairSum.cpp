// brute force method

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// vector<int> TwoSum(vector<int> nums, int target)
// {
//     vector<int> sum = {};
//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 sum.push_back(i);
//                 sum.push_back(j);
//                 return sum;
//             }
//         }
//     }
//     return sum;
// }
// int main()
// {
//     int target = 9;
//     vector<int> nums = {2, 7, 11, 15};
//     vector<int> sum = TwoSum(nums, target);
//     cout << "Your sum first index is " << sum[0] << " and second index is " << sum[1];
//     return 0;
// }

// Algorithm

#include <iostream>
#include <vector>
using namespace std;

vector<int> TwoSum(vector<int> nums, int target)
{
    vector<int> sum = {};
    int n = nums.size();
    int i = 0;
    int j = n - 1; 
    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {
            sum.push_back(i);
            sum.push_back(j);
            return sum;
        }
    }
    return sum;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> sum = TwoSum(nums, target);

    cout << "Your sum first index is " << sum[0] << " and second index is " << sum[1];
    return 0;
}
