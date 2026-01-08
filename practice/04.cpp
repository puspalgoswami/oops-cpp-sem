#include <iostream>

using namespace std;

void area(int s){
    cout << "Area of Square = " << s*s << endl;
}

void area(int l, int b){
    cout << "Area of Rectangle = " << l*b << endl;
}

int main(){
    int s, l, b;
    cout << "Enter side of square: ";
    cin >> s;
    cout << "Enter side of length: ";
    cin >> l;
    cout << "Enter side of breadth: ";
    cin >> b;

    area(s);
    area(l,b);

    return 0;
}