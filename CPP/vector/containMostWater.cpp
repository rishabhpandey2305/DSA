#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int water;
        int lp = 0;
        int rp = height.size() - 1;
        int ht;
        int area = INT_MIN;
        while (lp < rp)
        {
            water = rp - lp;
            ht = min(height[lp], height[rp]);
            area = max(area, water * ht);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return area;
    }
};

int main()
{
    Solution solution = Solution();
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7, 1};
    cout << solution.maxArea(height);
    return 0;
}
// class Solution
// {
// public:
//     int maxArea(vector<int> &height)
//     {
//         int water;
//         int ht;
//         int area = INT_MIN;
//         for (int i = 0; i < height.size(); i++)
//         {
//             for (int j = i + 1; j < height.size(); j++)
//             {
//                 water = j - i;
//                 ht = min(height[i], height[j]);
//                 area = max(area, water * ht);
//             }
//         }
//         return area;
//     }
// };

// int main()
// {
//     Solution solution = Solution();
//     vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7, 1};
//     cout << solution.maxArea(height);
//     return 0;
// }