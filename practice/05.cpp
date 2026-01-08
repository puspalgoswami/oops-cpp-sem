#include <iostream>
#include <cstring>

using namespace std;

class Person {
public:
    string name;
};

class Student : public Person {
public:
    int rollNo;

    void input() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter rollNo: ";
        cin >> rollNo;
    }

    void display() {
        cout << "The name of the student is " << name << endl;
        cout << "The roll of the student is " << rollNo << endl;
    }
};

int main(){
    Student s1;
    s1.input();
    s1.display();
    
    return 0;
}