#include <iostream>
using namespace std;
class Complex
{

    private:
    float real,imag;
    public:
    Complex( float r=0,float i=0)
    {
        real=r;
        imag=i;
    }
    Complex add (Complex C)
    {
        Complex temp;
        temp.real=real+C.real;
        temp.imag=imag+C.imag;
        return temp;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{

    Complex C1(3,2),C2(1,7);
    Complex C3;
    C3=C1.add(C2);
    cout<<" first Complex number:";
    C1.display();
    cout<<"second Complex number:";
    C2.display();
    cout<<"sum of the two complex number:";
    C3.display();
    return 0;
}