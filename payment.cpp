#include<iostream>
#include<iomanip>
using namespace std;
class employee
{
    private:
    int id;
    string name;
    float salary;
    public:
    void getdetails(int i)
    {
        cout<<"enter details for employee"<<i<<":\n";
        cout<<"id: ";
        cin>>id;
        cout<<"name: ";
        cin>>name;
        cout<<"salary: ";
        cin>>salary;
        cout<<endl;
    }
    void display()
    {
        cout<<left<<setw(10)<<id<<left<<setw(15)<<name<<left<<setw(10)<<salary<<endl;
    }
};
int main()
{
    int n;
    cout<<"enter number of employees:";
    cin>>n;
    employee emp[n];
    for(int i=0;i<n;i++)
    {
        emp[i].getdetails(i+1);
    }
    cout<<"\n_________________________\n";
    cout<<left<<setw(10)<<"id"<<left<<setw(15)<<"name"<<left<<setw(10)<<"salary"<<endl;
    for(int i=0;i<n;i++)
    {
        emp[i].display();
    }
    cout<<"______________________________\n";
    return 0;

}