#include<iostream>
using namespace std;
int dectoBinary(int num)
{
    int ans = 0;
    int pow =1;
    while(num>0)
    {
    int rem = num%2;
    num/=2;
    ans+=(rem*pow);
    pow*=10;
    }
    return ans;

}
int main()
{
    int num = 5;
    cout<<dectoBinary(num);
    return 0;
}