#include <iostream>
using namespace std;
class restaurants
{
private:
    string name[3];
    string cuisine[3];
    int rating[3];
    int i;

public:
    void readRestaurants()
    {
         for (int i = 0; i < 3; i++)
    {
        cout << "Enter your Restaurant Name" << endl;
        cin >> name[i];
        cout << "Enter your cuisine Name" << endl;  
        cin >> cuisine[i];
        cout << "Enter your Rating" << endl;
        cin >> rating[i];
    }
};

void displayRestaurants()
{
    for (i = 0; i < 3; i++)
    {
        cout << "Restaurant Name: " << name[i] << endl;
        cout << "Cuisine Name: " << cuisine[i] << endl;
        cout << "Rating:" << rating[i] << endl;
    }
}
void checkrestaurant(string check)
{
    for(int i=0;i<3;i++)
    {
    if(name[i]==check)
    {
        cout<<"Restaurant Name"<< name[i]<<endl;
        cout<<"Cuisine Name"<<cuisine[i]<<endl;
        cout<<"Rating:"<<rating[i]<<endl;
    }
    }
}
};
int main()
{
    string check;
    restaurants r;
    r.readRestaurants();
    r.displayRestaurants();
    cout<<"Ener your specific restaurnat name to check"<<endl;
    cin>>check;
    r.checkrestaurant(check);
    return 0;
}