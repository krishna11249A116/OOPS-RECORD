#include<iostream>
using namespace std;
class bookname
{
    private:
    int accno,pages;
    char bookname[50],author[50],ISB_NO[20];
    float price;
    public:
    void getdata()
    {
        cout<<"enter bookname:";
        cin>>bookname;
        cout<<"enter authorname:";
        cin>>author;
        cout<<"enter accno:";
        cin>>accno;
        cout<<"enter pages:";
        cin>>pages;
        cout<<"enter ISB_NO:";
        cin>>ISB_NO;
        cout<<"enter price:";
        cin>>price;
    }
    void display()
    {
        cout<<"bookname:"<<bookname<<endl;
        cout<<"author:"<<author<<endl;
        cout<<"accno:"<<accno<<endl;
        cout<<"pages:"<<pages<<endl;
        cout<<"ISB_NO:"<<ISB_NO<<endl;
        cout<<"price:"<<price<<endl;
    }
};
int main()
{
    bookname b [100];
    int i,n;
    cout<<"enter the n value"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
            b[i].getdata();

        for(i=0;i<n;i++)
        b[i].display();
    

}