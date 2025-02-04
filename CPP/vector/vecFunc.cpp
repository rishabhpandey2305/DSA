#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);
    vec.push_back(22);
    vec.push_back(45);
    vec.push_back(36);
    cout << "PUSH BACK COMPLETED" << endl;
    for (int i : vec)
    {
        cout << i << endl;
    }
    cout << "Vec Size:- " << vec.size() << endl;
    cout << "POP BACK" << endl;
    vec.pop_back();
    for (int i : vec)
    {
        cout << i << endl;
    }
    cout << "Vec Size:- " << vec.size() << endl;
    cout << "FRONT" << vec.front() << endl;
    cout << "BACK" << vec.back() << endl;
    cout << "at function " << vec.at(1);
    return 0;
}