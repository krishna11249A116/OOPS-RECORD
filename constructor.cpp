#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called: Object is created!" << endl;
    }
    ~Demo() {
        cout << "Destructor called: Object is destroyed!" << endl;
    }

    void display() {
        cout << "Inside display function." << endl;
    }
};

int main() {
    cout << "Main function started." << endl;

    Demo obj;   
    obj.display();

    cout << "Main function is ending." << endl;
    return 0;
}

