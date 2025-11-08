#include <iostream>
using namespace std;
class books
{
    private:
    char ISBNO[50],bookname[50],author[50];
    int pages,Accno;
    float price;
    public:
    void getdetails()
    {
        cout<<"enter ISBNO";
        cin>>ISBNO;
        cout<<"enter bookname";
        cin>>bookname;
        cout<<"enter author";
        cin>>author;
        cout<<"enter pages";
        cin>>pages;
        cout<<"enter Accno";
        cin>>Accno;
        cout<<"enter price";
        cin>>price;
    }
    void display()
    {
        cout<<"ISBNO:"<<ISBNO<<endl;
        cout<<"bookname:"<<bookname<<endl;
        cout<<"author:"<<author<<endl;
        cout<<"pages:"<<pages<<endl;
        cout<<"Accno:"<<Accno<<endl;
        cout<<"price:"<<price<<endl;
    }
};
int main()
{
    books b ;
    b.getdetails();
    b.display(); 
}