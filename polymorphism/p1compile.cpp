#include <iostream>
using namespace std;

class Area {
public:
    int area(int side) {
        return side * side;
    }

    int area(int length, int breadth) {
        return length * breadth;
    }

    double area(double radius) {
        return 3.14 * radius * radius;
    }
};

int main() {
    Area a;

    cout << "Square area: " << a.area(5) << endl;
    cout << "Rectangle area: " << a.area(4, 6) << endl;
    cout << "Circle area: " << a.area(3.5) << endl;

    return 0;
}
