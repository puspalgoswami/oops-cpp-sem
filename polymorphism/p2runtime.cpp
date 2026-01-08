#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows" << endl;
    }
};

class Cow : public Animal {
public:
    void sound() {
        cout << "Cow moos" << endl;
    }
};

int main() {
    Animal* a;

    Dog d;
    Cat c;
    Cow w;

    a = &d;
    a->sound();

    a = &c;
    a->sound();

    a = &w;
    a->sound();

    return 0;
}