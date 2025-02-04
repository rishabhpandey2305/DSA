#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    vector<int> linerSearch = {1, 2, 3, 4, 5};
    cout << "Enter your number" << endl;
    cin >> num;
    for (int i = 0; i < linerSearch.size(); i++)
    {
        if (linerSearch[i] == num)
        {
            cout << "Your Number is on index:- " << i << endl;
        }
    }
}