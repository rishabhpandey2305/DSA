#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        sort(strs.begin(), strs.end());
        cout << strs.front();
        string first = strs.front();
        string last = strs.back();
        int minLength = min(first.size(), last.size());
        cout << minLength;
        int i = 0;
        while (i < minLength && first[i] == last[i])
        {
            i++;
        }
        return first.substr(0, i);
    }
};

int main()
{
    Solution solution;
    vector<string> strs = {"flower", "flow", "flight"};
    cout << solution.longestCommonPrefix(strs);
    return 0;
}