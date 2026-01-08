#include <iostream>

using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void area(){
        cout << "Area = " << length*breadth;
    }

};

int main(){
    Rectangle r1;
    r1.area();

    return 0;
}