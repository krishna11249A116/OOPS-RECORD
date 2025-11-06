#include<iostream>
using namespace std;
class time
{
private:
int hours,minutes;
public:
  void gettime();
  void addtime (Timet1,Timet2);
  void displaytime();
};
void time::gettime()
{
cout<<"Enter the hours:";
cin>>hours;
cout<<"Enter the minutes:";
cin>>minutes;
}
void Time::addtime(Timet1,timet2)
{
    minutes=t1minutes+t2minutes;
    hours=minutes/60;
    minutes=minuiutes%60;
    hours=hours+t1.hours+t2.hours;
}
void time::displaytime()
{
cout<<"hours:"<<hours<<endl;
cout<<"minutes:"<<minutes<<endl;
}
int main()
{
  Time T1,T2,T3;
  T1.gettime();
  T2.gettime();
  T3.addtime(T1,T2);
  T3.displaytime();
  return 0;
}