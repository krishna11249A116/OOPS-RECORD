#include <iostream>
using namespace std;

class Counter {
private:
    int value;
public:
    Counter(int v = 0) : value(v) {}
    void display() const {
        cout << "Value: " << value << endl;
    }
    Counter operator++() {
        ++value;
        return *this;
    }
    Counter operator++(int) {
        Counter temp = *this; 
        value++;
        return temp; 
    }
    Counter operator--() {
        --value;
        return *this;
    }
    Counter operator--(int) {
        Counter temp = *this;
        value--;
        return temp;
    }
};

int main() {
    Counter c1(10);

    cout << "Initial ";
    c1.display();

    cout << "\nPrefix Increment (++c1): ";
    ++c1;
    c1.display();

    cout << "Postfix Increment (c1++): ";
    c1++;
    c1.display();

    cout << "\nPrefix Decrement (--c1): ";
    --c1;
    c1.display();

    cout << "Postfix Decrement (c1--): ";
    c1--;
    c1.display();

    return 0;
}
