#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int rollnumber;
    double marks;
void getdetails(){
    cout<<"Enter studuentname:";
    cin>>name;
    cout<<"Enter rollnumber:";
    cin>>rollnumber;
    cout<<"Enter marks";
    cin>>marks;
}
void displaydetails(){
    cout<<"name:"<<name<<endl;
    cout<<"rollnumber:"<<rollnumber<<endl;
    cout<<"marks:"<<marks<<endl;
}
};
    int main(){
    student students[60];
    int n;
    cout<<"Enter the number of students:";
   std::cin>>n;
    student student[n];
    for(int i=0;i<n;i++){
        cout<<"\nEnter details for student"<<i+1<<':'<<endl;
        student[i].getdetails();
    }
    cout<<"\n__student information__"<<endl;
    //cout<<"\nstudent"<<i+1<<":"<<endl;
     for(int i=0;i<n;i++){
    student[i].displaydetails();
    }
    return 0;
}
