#include <iostream>
using namespace std;
class Student {
protected:
    int rollNo;
public:
    void getStudentData() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
    void showStudentData() {
        cout << "Roll Number: " << rollNo << endl;
    }
};
class Test : public Student {
protected:
    float sub1, sub2;
public:
    void getTestData() {
        cout << "Enter marks in Subject 1: ";
        cin >> sub1;
        cout << "Enter marks in Subject 2: ";
        cin >> sub2;
    }
    void showTestData() {
        cout << "Marks in Subject 1: " << sub1 << endl;
        cout << "Marks in Subject 2: " << sub2 << endl;
    }
};
class Sports {
protected:
    float score;
public:
    void getSportsData() {
        cout << "Enter sports score: ";
        cin >> score;
    }
    void showSportsData() {
        cout << "Sports Score: " << score << endl;
    }
};
class Result : public Test, public Sports {
    float total;
public:
    void displayResult() {
        total = sub1 + sub2 + score;
        showStudentData();
        showTestData();
        showSportsData();
        cout << "Total Score = " << total << endl;
    }
};
int main() {
    Result r;
    r.getStudentData();
    r.getTestData();
    r.getSportsData();

    cout << "\n---- Student Result ----\n";
    r.displayResult();

    return 0;
}
