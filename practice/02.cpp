#include <iostream>

using namespace std;

#include <iostream>
#include <cstring>

using namespace std;

class Student {
private:
    int rollNo;
    string name;
public:

    // constructor
    Student(){
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void display(){
        cout << "Name of the << student is " << name << endl;
        cout << "Roll number of the student is " << rollNo << endl;
    }
};

int main(){
    Student s1;
    s1.display();

    return 0;
}