#include <iostream>
#include<string>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        size_t index = haystack.find(needle);
        return (index != std::string::npos) ? index : -1;
    }
};

int main()
{
    Solution solution;
    cout<<solution.strStr("sadbutsad", "sad");
    return 0;
}