#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<int> num = {1, 2, 3, 4, 5};
    vector<int> reverse;
    for (int i = num.size() - 1; i >= 0; i--)
    {
        reverse.push_back(num[i]);
    }
    for (int j : reverse)
    {
        cout << j << endl;
    }
    return 0;
}