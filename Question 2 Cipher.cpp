#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
    virtual string sound() const {
        return "Some sort of animal sound";
    }
    
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    string sound() const override {
        return "Bark";
    }
};

class Cat : public Animal {
public:
    string sound() const override {
        return "Meow";
    }
};

int main() {
    Animal* myDog = new Dog();
    Animal* myCat = new Cat();
    
    cout<< "Dog sound: " << myDog->sound() << endl;
    cout<< "Cat sound: " << myCat->sound() << endl; 
    
    delete myDog;
    delete myCat;

    return 0;
}