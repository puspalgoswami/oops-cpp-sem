#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    friend int calculateArea(Rectangle r);
};

int calculateArea(Rectangle r) {
    return r.length * r.breadth;
}

int main() {
    Rectangle r1(10, 5);

    cout << "Area of rectangle: " << calculateArea(r1) << endl;

    return 0;
}
