#include<iostream>
using namespace std;
class student 1;
class student 2;
{
    private:
    int marks;
    public:
    student1()
    {
        cout<<"enter marks:";
        cin>>marks;
    }
    friend void comparemarks(student1,student2);
};
class student2
{
    private:
    int marks;
    public:
    student2()
    {
        cout<<"enter marks:";
        cin>>marks;
    }
    friend void comparemarks(student1,student2);
};
void comparemarks(student1 a,student2 b)
{
    if(a,marks>b.marks)
    cout<<"the marks of student 2 is less than student 1.\n";
    else if(a.marks<b.marks)
    cout<<"the marks of student 1 is less than student 2.\n";
    else
    cout<<"the marks of the studentsis equal.\n;"
}
int main ()
{
    student  s1;
    student  s2;
    comparemarks(s1,s2);
    return 0;
}