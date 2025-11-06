#include<iostream>
using namespace std;

class complex
{
    int a, b, c;
public:
    complex() {}

    void getvalue()
    {
        cout << "Enter the two Numbers:";
        cin >> a >> b;
    }

    void operator++()
    {
        a = ++a;
        b = ++b;
    }

    void operator--()
    {
        a = --a;
        b = --b;
    }
    void operator++(int)
    {
        a++;
        b++;
    }
    void operator--(int)
    {
        a--;
        b--;
    }
    void display()
    {
        cout << a << "+\t" << b << "i" << endl;
    }
};
int main()
{
    complex obj;
    obj.getvalue();
    obj++;
    cout << "Increment complex Number\n";
    obj.display();
    obj--;
    cout << "Decrement complex Number\n";
    obj.display();
    return 0;
}
