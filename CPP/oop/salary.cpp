#include<iostream>
using namespace std;
class salary
{
    private:
    int n;
    int emp_id[10];
    string name[10];
    int salary[10];
    string emp_type[10];
    int hour[10];
    public:
    void getDetails()
    {
        cout<<"Enter your employee Number"<<endl;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cout<<"Enter Employee ID:"<<endl;
            cin>>emp_id[i];
            cout<<"Enter Employee Name:"<<endl;
            cin>>name[i];
            cout<<"Enter employee Type Like Full time or part time"<<endl;
            cin>>emp_type[i];
            salary[i]=5000;
            if(emp_type[i]=="parttime")
            {
                cout<<"Enter your Working Hour"<<endl;
                cin>>hour[i];
            }
        }
    }
    void returnDetails()
    {
        for(int i=0;i<n;i++)
        {
            if(emp_type[i]!="parttime")
            {
                cout<<"Employee Name:"<<" "<<name[i];
                cout<<"Employee ID"<<" "<<emp_id[i];
                cout<<"Employee Type"<<" "<<emp_type[i];
                cout<<"Salary"<<" "<<salary[i];
            }
            else
            {
                cout<<"Employee Name:"<<" "<<name[i]<<endl;
                cout<<"Employee ID:"<<" "<<emp_id[i]<<endl;
                cout<<"Employee Type:"<<" "<<emp_type[i]<<endl;
                cout<<"Salary:"<<" "<<200*hour[i]<<endl;
            }
        }
    }
};
int main()
{
    salary s;
    s.getDetails();
    s.returnDetails();
    return 0;
}