#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> num = {1, 5, 3, 4, 2};
    for (int i = 0; i < num.size() - 1; i++)
    {
        for (int j = i + 1; j < num.size(); j++)
        {
            if (num[i] > num[j])
            {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for (int i : num)
    {
        cout << i << " ";
    }
    return 0;
}