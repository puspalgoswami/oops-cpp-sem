#include <iostream>
#include <cstring>

using namespace std;

class Person {
public:
    Person() {
        cout << "Person constructor called" << endl;
    }

    string name;
};

class Student : public Person {
public:
    int rollNo;

    Student() {
        cout << "Student constructor called" << endl;
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
    s1.display();
    
    return 0;
}